#include <vector>
#include <algorithm>

std::vector<int> primes;

void count_upto(int n) {
    for (int i = 2; i < n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.insert(primes.end(), i);
        }
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    count_upto(n);
    std::cout << "Primes up to " << n << ": ";
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;
    return 0;
}