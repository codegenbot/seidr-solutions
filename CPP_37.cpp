```cpp
#include <vector>
#include <algorithm>

class MyVector {
public:
    bool operator==(const std::vector<float>& a, const std::vector<float>& b) {
        if(a.size() != b.size())
            return false;
        for(int i = 0; i < a.size(); i++)
            if(a[i] != b[i])
                return false;
        return true;
    }
};

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