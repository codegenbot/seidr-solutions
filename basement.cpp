#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    int negIndex = nums.size();
    
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            negIndex = i;
            break;
        }
    }
    
    return negIndex;
}

int main() {
    int numElements;
    std::cin >> numElements;

    std::vector<int> input(numElements);
    for (int i = 0; i < numElements; ++i) {
        std::cin >> input[i];
    }

    int result = basement(input);
    std::cout << result << std::endl;

    return 0;
}