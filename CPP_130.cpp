#include <vector>
#include <cassert>

std::vector<int> tri(int n){
    std::vector<int> result;
    if (n < 1) return result;
    result.push_back(1);
    for (int i = 2; i <= n; ++i) {
        int next_val = result.back() + (i - 1) * 2;
        result.push_back(next_val);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}
