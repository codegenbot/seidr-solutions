#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> v, int value) {
    std::vector<int> result;
    for (int i = 0; i < v.size(); ++i) {
        result.push_back(v[i]);
        result.push_back(value);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
}