#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> count_up_to(int n);

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> primes = count_up_to(n);
    
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    if (n <= 1) {
        return result;
    }
    
    std::vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
            for (int j = i * 2; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return result;
}