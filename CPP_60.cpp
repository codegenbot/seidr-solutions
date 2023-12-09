#include <iostream>

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The sum of all numbers from 1 to " << n << " is " << sum_to_n(n) << std::endl;
    return 0;
}