#include <iostream>
#include <vector>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::vector<int> result = factorize(n);

    std::cout << "Prime factors of " << n << " are: ";
    for (int factor : result) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;

    return 0;
}