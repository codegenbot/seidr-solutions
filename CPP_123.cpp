```
#include <iostream>
#include <vector>
#include <algorithm>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::find(a.begin(), a.end(), b[i]) == a.end()) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::vector<int> result = get_odd_collatz(n);
    if (same(get_odd_collatz(n), {1})) {
        for (auto i : result) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "No odd Collatz sequence.\n";
    }
    return 0;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}