#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> common(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> common(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (const auto& elem : a) {
        if (std::find(b.begin(), b.end(), elem) != b.end()) {
            result.push_back(elem);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    
    return 0;
}