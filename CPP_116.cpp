#include <vector>
#include <algorithm>

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> pairs;
    for (int x : arr) {
        int ones = __builtin_popcount(x);
        pairs.emplace_back(ones, x);
    }
    sort(pairs.begin(), pairs.end());
    return vector<int>(pairs.begin(), pairs.end());
}