#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums;
    int num;
    
    // Read input from the user.
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        
        if (num == -1) 
            break;
            
        nums.push_back(num);
    }
    
    count = specialFilter(nums);

    // Print the result
    std::cout << "Count: " << count << std::endl;

    return 0;
}

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}