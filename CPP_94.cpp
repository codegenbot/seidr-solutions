#include <vector>
#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int result = max_prime_sum({127, 97, 8192});
    std::cout << "The maximum prime number in the list is: " << result << std::endl;
    return 0;
}