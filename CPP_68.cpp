#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    auto it = min_element(arr.begin(), arr.end(),
        [](int a, int b) { return a % 2 && b % 2 ? a > b : a < b; });

    result.push_back({*it, distance(arr.begin(), it)});
    return result;
}