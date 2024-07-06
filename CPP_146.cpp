#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    nums.resize(n);
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int count = specialFilter(nums);
    
    if(count > 0){
        std::cout << "Number of integers that satisfy the given conditions is: " << count << std::endl;
    } else{
        std::cout << "No integers in the list satisfy the given conditions." << std::endl;
    }
    
    return 0;
}