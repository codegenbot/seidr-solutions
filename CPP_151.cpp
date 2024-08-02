#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<int>& lst) {
    long long sum = 0;
    for (int num : lst) {
        if (num > 0) {
            sum += static_cast<long long>(num) * static_cast<long long>(num);
        }
    }
    return sum;
}

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    
    long long result = double_the_difference(numbers);
    std::cout << "The sum of squares is: " << result << std::endl;
    
    return 0;
}