#include <algorithm>
#include <cassert>
#include <vector>

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

std::vector<int> unique(const std::vector<int>& l) {
    std::vector<int> temp = l;
    std::sort(temp.begin(), temp.end());
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
    return temp;
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>{0, 2, 3, 5, 9, 123}));
    return 0;
}