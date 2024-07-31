#include <vector>
#include <algorithm>

std::vector<int> get_odd_collatz(int n);
bool is_same(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}