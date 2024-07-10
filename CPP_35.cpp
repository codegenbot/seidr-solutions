#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int num;
    
    for(int i = 0; i < 5; i++) {
        std::cout << "Enter number: ";
        std::cin >> num;
        l.push_back(num);
    }
    
    if(l.size() > 0) {
        int max_num = *std::max_element(l.begin(), l.end());
        
        if(std::abs(max_num) == max_num)
            std::cout << "The maximum positive number is: " << max_num << std::endl;
        else
            std::cout << "The maximum negative number is: " << max_num << std::endl;
    }
    
    return 0;
}