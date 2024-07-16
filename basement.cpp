#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    if (std::cin.eof()) { // Check for end of file
        int result = basement(nums);
        std::cout << result << std::endl;
    } else {
        std::cerr << "Invalid input." << std::endl;
        return 1;
    }

    return 0;
}