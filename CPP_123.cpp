```c++
#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::initializer_list<int> a, std::initializer_list<int> b) {
    return std::all_of(a.begin(), a.end(),
        [&b](int x) { return std::any_of(b.begin(), b.end(), [&](int y) { return x == y; }); });
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        if (n % 2 != 0)
            result.push_back(n);
    }
    return result;
}

int main() {
    assert(issame({get_odd_collatz(1)}, {get_odd_collatz(1)}));
    return 0;
}