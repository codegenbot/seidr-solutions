#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if (arr.empty()) return result;
    int min_even = INT_MAX, min_idx = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even) {
            min_even = arr[i];
            min_idx = i;
        }
    }
    result.push_back({min_even, min_idx});
    return result;
}