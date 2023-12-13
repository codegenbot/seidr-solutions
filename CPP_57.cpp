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
    std::vector<float> test1 = {1.5, 2.0, 3.5, 5.0};
    std::vector<float> test2 = {7.0, 5.0, 2.0, 1.0};
    std::vector<float> test3 = {10.0, 10.0, 10.0, 10.0};
    
    std::cout << "Test 1: " << monotonic(test1) << std::endl; // Output: 1
    std::cout << "Test 2: " << monotonic(test2) << std::endl; // Output: 1
    std::cout << "Test 3: " << monotonic(test3) << std::endl; // Output: 1
    
    return 0;
}