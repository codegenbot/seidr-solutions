```cpp
#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result = {n};
    while (n != 1) {
        if (n % 2) n = 3 * n + 1;
        else n /= 2;
        result.push_back(n);
    }
    return result;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}