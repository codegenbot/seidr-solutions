#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int>& arr);

int main() {
    // Test cases
    std::vector<int> testcase1 = {0, 1, 2, 3, 4};
    std::cout << move_one_ball(testcase1) << std::endl; // Output: 1 (true)
    
    std::vector<int> testcase2 = {3, 1, 2, 4, 0};
    std::cout << move_one_ball(testcase2) << std::endl; // Output: 0 (false)
    
    return 0;
}