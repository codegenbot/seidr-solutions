#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int num;
    
    // Read input from user
    while(std::cin >> num) {
        l.push_back(num);
    }
    
    if(l.empty()) {
        return 0; 
    } else {
        auto max_val = *std::max_element(l.begin(), l.end());
        std::cout << "Maximum value is: " << max_val << std::endl;
        return 0;
    }
}