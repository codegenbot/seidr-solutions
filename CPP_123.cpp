#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> collatz;
    while (n != 1) {
        collatz.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    collatz.push_back(1);
    return collatz;
}