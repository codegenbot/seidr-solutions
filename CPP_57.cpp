```cpp
#include <vector>
#include <iostream>

bool monotonic(std::vector<float> l){
    bool increasing = true;
    bool decreasing = true;
    
    for (int i = 1; i < l.size(); i++) {
        if (l[i] < l[i-1]) {
            increasing = false;
        }
        if (l[i] > l[i-1]) {
            decreasing = false;
        }
    }
    
    return increasing || decreasing;
}

int main() {
    std::vector<float> l1 = {1, 2, 3, 4, 5};
    std::vector<float> l2 = {5, 4, 3, 2, 1};
    std::vector<float> l3 = {1, 2, 3, 2, 1};
    
    std::cout << std::boolalpha << monotonic(l1) << std::endl;
    std::cout << std::boolalpha << monotonic(l2) << std::endl;
    std::cout << std::boolalpha << monotonic(l3) << std::endl;
    
    return 0;
}
```