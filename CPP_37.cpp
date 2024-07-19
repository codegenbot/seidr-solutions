#include <algorithm>
#include <vector>

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sortEven(std::vector<float> l){
    std::vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            std::vector<float> even_elements(l.begin() + i, l.end());
            std::sort(even_elements.begin(), even_elements.end());
            auto min_element = *std::min_element(even_elements.begin(), even_elements.end());
            for(auto& x: even_elements) {
                if(x == min_element) {
                    l_prime.push_back(x);
                    break;
                }
            }
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