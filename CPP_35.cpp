```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int num;
    
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    if (!numbers.empty()) {
        int maxNum = *std::max_element(numbers.begin(), numbers.end());
        std::cout << maxNum << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
    
    return 0;
}