#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> collatz;
    collatz.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            collatz.push_back(n);
        }
    }
    return collatz;
}

int main() {
    assert(issame(get_odd_collatz(1), {1, 1}));
    return 0;
}