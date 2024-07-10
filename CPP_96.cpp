#include <vector>
#include <cassert>
#include <cmath>

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    for (int num = 2; num <= n; ++num) {
        bool is_prime = true;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(num);
        }
    }
    return primes;
}