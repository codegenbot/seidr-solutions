#include <iostream>
#include <vector>

int count_nums(const std::vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        if (num % 2 == 1)
            result++;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    std::vector<int> nums(n, int());  
    for(int i = 0; i < n; i++) {
        std::cout << "Enter integer #"<<i+1<<": ";
        int num; 
        std::cin >> num;
        nums[i] = num; // Assign the value to the vector
    }
    int result = count_nums(nums);
    std::cout << "Result: " << result << std::endl;
    return 0;
}