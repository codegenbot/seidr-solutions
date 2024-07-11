```c++
#include <algorithm>
#include <vector>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<pair<int, int>> pairs;
    for (int i : arr) {
        int ones = __builtin_popcount(i);
        pairs.push_back({ones, i});
    }
    sort(pairs.begin(), pairs.end());
    return vector<int>(pairs.begin(), pairs.end(), [](const auto& p) { return p.second; });
}