#include <vector>
#include <unordered_set>

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

vector<int> unique(vector<int> l) {
    unordered_set<int> seen;
    vector<int> result;
    for (auto it = l.begin(); it != l.end(); ++it) {
        if (seen.insert(*it).second)
            result.push_back(*it);
    }
    return result;
}