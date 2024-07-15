#include <iostream>
#include <vector>

int basement(std::vector<int> nums);

int main() {
    std::vector<int> nums = {2, -3, 1, -5, 2};
    int result = basement(nums);
    std::cout << "First index with negative sum: " << result << std::endl;
    return 0;
}