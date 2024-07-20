#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) return result;

    auto it = min_element(arr.begin(), arr.end(), 
        [](int a, int b) { return (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0); });
    
    for (size_t i = 0; i < arr.size(); ++i) {
        if (&*arr.begin() + i == it) {
            result.push_back({*it, i});
            break;
        }
    }

    return result;
}