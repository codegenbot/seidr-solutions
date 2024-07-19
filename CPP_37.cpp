#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sortEven(std::vector<float> l){
    std::vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            auto even_elements = std::partition(l.begin(), l.end(), [](float x){return std::abs(x) % 2 == 0});
            while(even_elements != l.end() && *even_elements >= 0) {
                ++even_elements;
            }
            std::sort(even_elements, l.end());
            for(; even_elements < l.end(); ++even_elements){
                l_prime.push_back(*even_elements);
            }
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}

int main() {
    assert (issame(sortEven({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), sortEven({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10})));
    return 0;
}