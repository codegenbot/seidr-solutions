#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    if (!arr.empty()) {
        if ((arr.front() + arr.back()) % 2 == 0) {
            std::sort(arr.begin(), arr.end(), std::greater<int>());
        } else {
            std::sort(arr.begin(), arr.end());
        }
    }
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame({21, 14, 23, 11}, {23, 21, 14, 11}));
    return 0;
}