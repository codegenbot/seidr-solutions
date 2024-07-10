```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int num;
    
    while (std::cin >> num) {
        l.push_back(num);
    }
    
    if (!l.empty()) {
        std::cout << *std::max_element(l.begin(), l.end()) << std::endl;
    } else {
        std::cout << "No numbers to find the maximum of." << std::endl;
    }

    return 0;
}