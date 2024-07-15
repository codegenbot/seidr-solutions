#include <vector>
#include <cassert>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> count_up_to(int limit) {
    std::vector<int> primes;
    for (int i = 2; i <= limit; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    return 0;
}