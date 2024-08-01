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
    vector<int> result;
    unordered_set<int> seen;
    for (int x : l) {
        if (seen.insert(x).second)
            result.push_back(x);
    }
    return result;
}