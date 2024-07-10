```cpp
#include <vector>
#include <iostream>

int count_nums(std::vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; 
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
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
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter integer " << (i+1) << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    std::cout << "Number of positive integers with an odd sum of digits: " << count_nums(numbers) << std::endl;
    return 0;
}