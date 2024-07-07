#include <vector>
#include <algorithm>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
    return primes;
}

void originalMain() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> primes = count_up_to(n);
    for (int i = 1; i < primes.size(); i++) {
        if (!issame({primes[0]}, {primes[i]})) {
            std::cout << "Prime number: " << primes[i] << std::endl;
        }
    }
}

int main() {
    originalMain();
    return 0;
}