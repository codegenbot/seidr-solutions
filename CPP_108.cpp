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
    int n;
    
    // Input the number of integers
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    // Read input from user and store it in a vector
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter integer #"<<i+1<<": ";
        std::cin >> num;
        nums.push_back(num);
    }

    // Call the function to count numbers
    int result = count_nums(nums);

    // Print output
    std::cout << "Number of integers with an odd sum of digits: " << result << endl;

    return 0;
}