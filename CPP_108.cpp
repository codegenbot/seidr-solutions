```cpp
#include <iostream>
#include <cassert>

int count_nums(char** nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (atoi(nums[i]) >= 0) {
            int sum = 0;
            while (atoi(nums[i]) > 0) {
                sum += abs(atoi(nums[i]) % 10);
                atoi(nums[i]) /= 10;
            }
            if (sum % 2 != 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            while (atoi(nums[i]) < 0) {
                sum += abs(atoi(nums[i]) % 10);
                atoi(nums[i]) /= 10;
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
        nums[i] = new char[10]; 
        strcpy(nums[i], std::to_string(num).c_str());
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