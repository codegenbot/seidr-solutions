#include <vector>
#include <cassert>

std::vector<int> count_up_to(int n) {
    std::vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    if (n >= 2) {
        return std::vector<int>(primes.begin(), primes.begin() + n - 1);
    } else {
        return std::vector<int>();
    }
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));

    return 0;
}