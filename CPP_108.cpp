#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit = -digit;
                    negative = !negative;
                }
                sum += digit;
                num /= 10;
            }
            if (!negative && sum > 0 || negative && sum >= 1) {
                count++;
            }
        } else {
            int sum = 0;
            bool negative = true;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    
    std::vector<int> numbers(size);
    
    for(int i = 0; i < size; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    
    int result = count_nums(numbers);
    std::cout << "The count of positive integers is: " << result;
    return 0;
}