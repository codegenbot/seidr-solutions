#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return result;
    }

    auto it = min_element(arr.begin(), arr.end(),
                           [](int a, int b) { return (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0); });
    
    if (*it % 2 == 0) {
        result.push_back({*it, distance(arr.begin(), it)});
    } else {
        result = {};
    }
    
    return result;
}