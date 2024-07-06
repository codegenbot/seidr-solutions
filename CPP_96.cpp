```
#include <vector>
#include <iostream>

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        if(i == 2)
            primes.push_back(i);
        else if(i > 2) {
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(i);
            }
        }
    }
    return primes;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    auto primes = count_up_to(n);

    for (auto prime : primes) {
        std::cout << prime << " ";
    }

    std::cout << std::endl;

    return 0;
}