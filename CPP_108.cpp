#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = std::abs(num);
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Test the count_nums function
    std::vector<int> numbers = {1, 2, 3, -10, -15, 0};
    int result = count_nums(numbers);
    
    // Print the result
    std::cout << "Number of elements with non-zero digit sum: " << result << std::endl;
    
    return 0;
}