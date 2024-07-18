#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> count_up_to(int n) {
    std::vector<int> res;
    if (n <= 1) {
        return res;
    }
    std::vector<bool> isPrime(n, true);
    for (int p = 2; p * p < n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i < n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            res.push_back(i);
        }
    }
    return res;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
  
    return 0;
}