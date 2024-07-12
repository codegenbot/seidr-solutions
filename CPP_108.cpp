```cpp
#include <iostream>
#include <cassert>

int count_nums(char** nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (atoi(nums[i]) >= 0) {
            std::string str = std::to_string(atoi(nums[i]));
            int sum = 0;
            for (char c : str) {
                sum += c - '0';
            }
            if (sum % 2 != 0)
                count++;
        } else {
            std::string str = std::to_string(atoi(nums[i]));
            int sum = 0, sign = 1;
            for(int j=str.length()-1; j>=0; j--) {
                sum += abs(str[j] - '0') * sign;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;
}

int main() {
    int size;
    std::cout << "Enter the number of integers: ";
    std::cin >> size;

    char** nums = new char*[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter integer # " << i + 1 << ": ";
        int num;
        std::cin >> num;
        for (char c : std::to_string(num)) {
            nums[i] = new char[2]; // Add 1 for the null-terminator
            nums[i][0] = c; // Initialize the string with the character representation of the integer
            nums[i][1] = '\0'; // Manually add the null-terminator
        }
    }

    int count = count_nums(nums, size);
    for (int i = 0; i < size; i++) {
        delete[] nums[i]; 
    }
    delete[] nums;
    std::cout << "The number of positive integers with an odd digital root is: " << count << std::endl;
    assert(count == 1); 
    return 0;
}