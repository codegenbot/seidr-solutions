#include <cmath>
#include <iostream>
#include <vector>

double sum_squares(const std::vector<int>& numbers) {
    double sum = 0.0;
    for (int number : numbers) {
        sum += pow(number, 2);
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    if(n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    } else {
        std::vector<int> numbers;
        for (int i = 1; i <= n; ++i) {
            int num;
            std::cin >> num;
            numbers.push_back(num);
        }
        
        double result = sum_squares(numbers);
        std::cout << "Sum of squares: " << result << std::endl;
    }
}