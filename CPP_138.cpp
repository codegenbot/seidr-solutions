```cpp
#include <iostream>

bool is_equal_to_sum_even(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        if (sum + i > n)
            return false;
        sum += i;
        if (sum == n)
            return true;
    }
    return false;
}

int main() {
    int choice;
    std::cout << "Enter a number: ";
    std::cin >> choice;
    if (is_equal_to_sum_even(choice))
        std::cout << "The given number is equal to the sum of even numbers up to that number." << std::endl;
    else
        std::cout << "The given number is not equal to the sum of even numbers up to that number." << std::endl;
    return 0;
}