#include <algorithm>
#include <vector>

std::vector<int> main() {
    std::vector<int> result;
    if (result.empty()) return result;

    sort(result.begin(), result.end());
    while (!result.empty()) {
        result.push_back(*result.begin());
        result.erase(result.begin());
        if (!result.empty())
            sort(result.begin(), result.end());
    }

    return result;
}

bool vector<int> issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}