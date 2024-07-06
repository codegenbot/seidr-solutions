#include <vector>
#include <algorithm>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> v{{get_odd_collatz(1)}};
    for (const auto& s : v) {
        for (auto i : s) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}