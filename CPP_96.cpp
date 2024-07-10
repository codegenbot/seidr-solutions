#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> count_up_to(int limit) {
    std::vector<int> primes;
    for (int num = 2; num <= limit; ++num) {
        bool is_prime = true;
        for (int i = 2; i * i <= num; ++i) {
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

int main() {
    std::vector<int> primes = count_up_to(20);
    assert(issame(primes, std::vector<int>{2, 3, 5, 7, 11, 13, 17, 19}));
}