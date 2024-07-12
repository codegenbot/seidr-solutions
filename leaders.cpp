// main.cpp
#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums);

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> leaders = findLeaders(nums);
    
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}