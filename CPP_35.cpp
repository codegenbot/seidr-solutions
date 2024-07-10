#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int num;
    
    while(std::cin >> num) {
        l.push_back(num);
    }
    
    if(l.empty()) {
        std::cout << "0" << std::endl;
    } else {
        return *std::max_element(l.begin(), l.end());
    }
}