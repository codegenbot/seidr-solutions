#include <iostream>
#include <vector>

long long double_the_difference(const std::vector<float>& numbers) {
    long long sum = 0;
    for (float x : numbers) {
        if (x > 0 && static_cast<int>(x) == x) { // check if number is positive and integer
            if (std::fmod(x, 2.0) != 0.0) { // check if number is odd
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    
    long long result = double_the_difference(numbers);
    std::cout << "The sum of the squares of the odd positive integers is: " << result << std::endl;

    return 0;
}