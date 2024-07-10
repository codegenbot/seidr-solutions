#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<int> result;
    for (int num : arr) {
        int ones = __builtin_popcount(num);
        result.push_back({num, ones});
    }
    std::sort(result.begin(), result.end(),
        [](const auto &a, const auto &b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });
    for (int i = 0; i < result.size(); i++) {
        arr[i] = result[i].first;
    }
    return arr;
}