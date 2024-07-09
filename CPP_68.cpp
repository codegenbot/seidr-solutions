#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    auto it = min_element(arr.begin(), arr.end(), [](int a, int b) { return a % 2 == 0 && b % 2 != 0 || a < b; });
    if (*it % 2 != 0) {
        result.push_back({*it, distance(arr.begin(), it)});
    }

    return result;
}