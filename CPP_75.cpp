#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a){
    int count = 0;
    for (int i = 2; i <= a/2; ++i) {
        if (is_prime(i) && a % i == 0) {
            a = a / i;
            count++;
        }
    }
    if (count == 3 && is_prime(a)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << std::boolalpha << is_multiply_prime(num) << std::endl;

    return 0;
}