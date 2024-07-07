#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        int ones = __builtin_popcount(arr[i]);
        result.push_back({ones, arr[i]});
    }
    std::sort(result.begin(), result.end());
    vector<int> final_result;
    for (auto& x : result) {
        final_result.push_back(x.second);
    }
    return final_result;
}