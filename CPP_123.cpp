#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::set<int> get_odd_collatz(int n) {
    std::set<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.insert(n);
        }
    }
    return result;
}

int main() {
    assert(issame(get_odd_collatz(6), {1, 5})); 
    return 0;
}