#include <vector>
#include <cassert>
#include <cmath>

std::vector<int> count_up_to(int n){
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j <= std::sqrt(i); ++j) {
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

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(count_up_to(101) , {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    return 0;
}