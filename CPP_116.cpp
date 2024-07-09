#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    return v;
}

int main_test() {
    std::vector<int> a({1, 2, 4, 8, 16, 32});
    std::vector<int> b = sort_array(a);
    assert(issame(b, {1, 2, 4, 8, 16, 32}));
    return 0;
}