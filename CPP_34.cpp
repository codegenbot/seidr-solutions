```cpp
#include <vector>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

std::vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), end(l));
    unordered_set<int> seen;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (seen.insert(*it).second)
            continue;
        *it = *--result.end();
    }
    return result;
}

int main() {
    vector<int> l = {1, 2, 3, 4, 5};
    unique(l);
    return 0;
}