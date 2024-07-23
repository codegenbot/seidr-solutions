```cpp
#include <initializer_list>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> v1(n);
    for (auto &i : v1) {
        std::cin >> i;
    }
    
    std::vector<float> v2(n);
    for (auto &i : v2) {
        std::cin >> i;
    }
    
    if(issame(v1,v2))
        std::cout << "vectors are same" << std::endl;
    else
        std::cout << "vectors are different" << std::endl;
    
    return 0;
}