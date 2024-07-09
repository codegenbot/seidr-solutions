```cpp
#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int num;
    
    while (true) {
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> num;
        
        if (num == -1)
            break;
            
        nums.push_back(num);
    }
    
    std::cout << "Count of positive sums: " << count_nums(nums) << std::endl;

    return 0;
}