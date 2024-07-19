#include <algorithm>
#include <vector>

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l){
    std::vector<float> result;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            std::vector<float> even_elements(l.begin() + i, l.begin() + i+1);
            std::sort(even_elements.begin(), even_elements.end());
            result.push_back(*std::min_element(even_elements.begin(), even_elements.end()));
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}