#include <cassert>
#include <iostream>

long long special_factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    long long result = 1;
    for (int i = n; i > 0; --i) {
        result *= i;
        for (int j = i - 1; j > 0; --j) {
            result *= j;
        }
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    long long result = special_factorial(num);
    std::cout << "Special Factorial of " << num << " is " << result << std::endl;
    assert(result >= 0); // check for negative values
    return 0;
}