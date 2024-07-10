```cpp
#include <iostream>
#include <vector>

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
    
    // Read the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    // Read the elements
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    
    int result = count_nums(numbers);
    std::cout << "Count of positive integers: " << result << std::endl;
    
    return 0;
}