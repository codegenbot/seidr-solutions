#include <algorithm>
#include <vector>

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sortEven(std::vector<float> l){
    std::vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            auto even_elements = std::partition(l.begin(), l.end(), [](float x){return std::abs(x) % 2 == 0});
            auto end_even = even_elements;
            while(even_elements != end_even && *even_elements >= 0) {
                ++even_elements;
            }
            end_even = even_elements;
            std::sort(even_elements, end_even);
            l_prime.push_back(*std::min_element(even_elements, end_even));
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}

int main(){
    assert (areSame(sortEven({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), sortEven({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10})));
    return 0;
}