#pragma GCC required -std=c++17

#include <vector>
#include <algorithm>
#include <initializer_list>
#include <functional>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame({get_odd_collatz(1)}, {1}));
    return 0;
}