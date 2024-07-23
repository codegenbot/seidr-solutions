#include <iostream>
#include <vector>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    int minIndex = -1; 
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0 && minIndex == -1)
            minIndex = i;
        else if (sum >= 0 && minIndex != -1)  
            return minIndex; 
    }
    return -1; 
}

int main() {
    std::vector<int> input = {-2, 3, 1, -5, 4};
    int result = basement(input);
    if (result == -1)
        std::cout << "No negative sum found." << std::endl;
    else
        std::cout << "First index with negative sum: " << result << std::endl;
    return 0;
}