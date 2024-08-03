#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    
    if (n >= 2) {
        primes.push_back(2);
    }
    
    for (int i = 3; i <= n; i += 2) {
        bool is_prime = true;
        
        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime) {
            primes.push_back(i);
        }
    }
    
    return primes;
}

assert(is_same(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));