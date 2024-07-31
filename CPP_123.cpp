#include <vector>
#include <algorithm>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> collatz;
    collatz.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            collatz.push_back(n);
        }
    }
    return collatz;
}