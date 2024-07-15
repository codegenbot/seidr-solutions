#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        if (std::all_of(std::to_string(num).begin(), std::to_string(num).end(), [](char c) { return c != '0' && (c - '0') % 2 != 0; })) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int solve_problem() {
    assert(issame(std::vector<int>({31, 135}), std::vector<int>({135, 103, 31})));
    return 0;
}