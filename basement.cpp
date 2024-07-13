#include <iostream>
#include <vector>

int basementIndex(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {-2, 1, -3, 4, -1};
    int index = basementIndex(numbers);
    if(index == -1) {
        std::cout << "No basement found." << std::endl;
    } else {
        std::cout << "Basement found at index " << index << std::endl;
    }
    return 0;
}