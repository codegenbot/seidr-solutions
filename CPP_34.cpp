#include <algorithm>

vector<int> unique(vector<int> l) {
    vector<int> result = l;
    sort(result.begin(), result.end());
    auto it = std::unique(result.begin(), result.end());
    result.erase(it, result.end());
    return result;
}