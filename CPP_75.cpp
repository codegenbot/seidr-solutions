#include <iostream>
#include <vector>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a < 6) return false;
    
    std::vector<int> primes;
    for (int i = 2; i < 100; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    
    for (int i = 0; i < primes.size(); ++i) {
        for (int j = i + 1; j < primes.size(); ++j) {
            for (int k = j + 1; k < primes.size(); ++k) {
                if (primes[i] * primes[j] * primes[k] == a) {
                    return true;
                }
            }
        }
    }
    
    return false;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (is_multiply_prime(num)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
   
    return 0;
}