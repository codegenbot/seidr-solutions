#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> res;
    while (n > 1) {
        if (n % 2 != 0)
            res.push_back(n);
        n = n / 2;
    }
    return res;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}