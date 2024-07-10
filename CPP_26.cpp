#include <algorithm>
#include <vector>
#include <assert.h>

namespace std {
    bool operator==(const vector<int>& a, const vector<int>& b) {
        return a == b;
    }
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    return v;
}

int main() {
    assert(issame({1, 2, 3, 2, 4, 3, 5}, {1, 4, 5}));
    return 0;
}