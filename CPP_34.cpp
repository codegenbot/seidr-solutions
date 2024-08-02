#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> unique(vector<int> l) {
    vector<int> result = l;
    sort(result.begin(), result.end());
    auto it = std::unique(result.begin(), result.end());
    result.erase(it, result.end());
    return result;
}