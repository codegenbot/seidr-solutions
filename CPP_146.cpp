#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums;
    int num;
    
    // Read input from user
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        
        if (num == -1)
            break;
            
        nums.push_back(num);
    }
    
    // Calculate the count and print the output
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    
    std::cout << "The number of special numbers is: " << count << std::endl;
    
    return 0;
}