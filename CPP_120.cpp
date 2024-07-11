#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> maximum(std::vector<int> a, int n) {
    std::vector<int> result;
    if (a.size() > 0 && n > 0) {
        std::partial_sort(a.begin(), a.begin() + n, a.end(), std::greater<int>());
        for (int i = 0; i < n; ++i) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}