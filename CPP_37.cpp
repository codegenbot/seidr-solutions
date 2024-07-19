```cpp
#include <algorithm>
#include <vector>

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sortEven(std::vector<float> l){
    std::vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            auto even_elements = std::stable_partition(l.begin(), l.end(), [](float x){return (int)x % 2 == 0});
            std::sort(even_elements, l.end());
            for(; even_elements != l.end(); ++even_elements){
                l_prime.push_back(*even_elements);
            }
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}

int main() {
    assert(areSame(sortEven({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 4, 2, 5, 11, 23, -10}));
    return 0;
}