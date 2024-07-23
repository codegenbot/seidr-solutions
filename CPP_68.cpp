```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> result;
    for (int x : v) {
        if (x == 7)
            result.push_back(x);
    }
    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}