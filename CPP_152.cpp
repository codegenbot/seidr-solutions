#include <vector>
#include <cassert>

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

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> diff(a.size());
    
    for (size_t i = 0; i < a.size(); ++i) {
        diff[i] = a[i] - b[i];
    }
    
    return diff;
}

int main() {
    assert(issame({1, 2, 3, 5}, {-1, 2, 3, 4}) == false);
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == std::vector<int>{2, 0, 0, 1});
    
    return 0;
}