```cpp
#include <iostream>
#include <vector>

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
    std::vector<float> test_case1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::cout << "Test case 1: " << monotonic(test_case1) << std::endl;
    
    std::vector<float> test_case2 = {5.0, 4.0, 3.0, 2.0, 1.0};
    std::cout << "Test case 2: " << monotonic(test_case2) << std::endl;
    
    std::vector<float> test_case3 = {1.0, 2.0, 3.0, 4.0, 1.0};
    std::cout << "Test case 3: " << monotonic(test_case3) << std::endl;

    return 0;
}
```