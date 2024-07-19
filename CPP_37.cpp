```cpp
#include <initializer_list>
#include <algorithm>

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

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert (issame(sort_even({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}) , {-12.0f, 8.0f, 3.0f, 4.0f, 5.0f, 2.0f, 12.0f, 11.0f, 23.0f, -10.0f}));
    return 0;
}