#include <vector>
#include <algorithm>

bool operator==(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(std::vector<float> l){
    std::vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            std::vector<float> even_elements(l.begin() + i, l.begin() + i+1);
            std::sort(even_elements.begin(), even_elements.end());
            l_prime.push_back(*std::min_element(even_elements.begin(), even_elements.end()));
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}