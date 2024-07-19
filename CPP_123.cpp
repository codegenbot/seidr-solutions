#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::std::vector<std::int> &a, const std::std::vector<std::int> &b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (std::size_t i = 0; i < a.size(); ++i) {
        if (a[i] % 2 == 0) {
            return false;
        }
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::std::vector<std::int> get_odd_collatz(std::int num) {
    std::std::vector<std::int> result;
    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            if (num != 1) {
                result.push_back(num);
            }
            num = 3 * num + 1;
        }
    }
    result.push_back(1);
    return result;
}