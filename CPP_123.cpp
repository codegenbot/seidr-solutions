#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> get_odd_collatz(int n); // Function declaration

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), {1})); // Corrected function name
    return 0;
}