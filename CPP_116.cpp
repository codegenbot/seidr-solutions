#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<int> result;
    for (int i : arr) {
        int ones = __builtin_popcount(i);
        result.push_back({i, ones});
    }
    sort(result.begin(), result.end(),
         [](const pair<int, int>& a, const pair<int, int>& b) {
             if (a.second == b.second) return a.first < b.first;
             return a.second < b.second;
         });
    for (int i = 0; i < result.size(); i++) {
        arr[i] = result[i].first;
    }
    return arr;
}