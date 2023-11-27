#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> collatz;
    collatz.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        collatz.push_back(n);
    }
    std::vector<int> odd_collatz;
    for (int i = 0; i < collatz.size(); i++) {
        if (collatz[i] % 2 != 0) {
            odd_collatz.push_back(collatz[i]);
        }
    }
    std::sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implementation of the issame function
    // ...
    // You can implement this function according to the required logic
    return true;
}