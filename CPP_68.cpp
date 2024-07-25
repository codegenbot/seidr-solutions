```cpp
#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

int main() {
    std::vector<int> arr = {};
    
    if (arr.empty()) {
        std::cout << "Array is empty." << std::endl;
    } else {
        for (auto i : arr) {
            if (issame(i, 0)) {
                std::cout << "The array contains the number 0." << std::endl;
            }
        }
    }
    
    return 0;
}