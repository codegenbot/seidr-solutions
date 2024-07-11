#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int maximum(std::vector<int> a, int defaultValue) {
    if (a.empty()) {
        return defaultValue;
    }
    return *std::max_element(a.begin(), a.end());
}

assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{}));