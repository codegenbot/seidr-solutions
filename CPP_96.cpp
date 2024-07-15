#include <iostream>
#include <vector>

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    if (n < 2) {
        return result;
    }
    
    std::vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> primes = count_up_to(n);
    
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    
    return 0;
}