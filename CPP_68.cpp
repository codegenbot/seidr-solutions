#include <algorithm>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    auto it = min_element(arr.begin(), arr.end(), [i=0](int a, int b) {
        if (a % 2 == 0 && b % 2 != 0) return true;
        if (b % 2 == 0 && a % 2 != 0) return false;
        return i++ < 1 ? a < b : a <= b;
    });
    
    int smallest_value = *it;
    result.push_back({smallest_value, distance(arr.begin(), it)});
    return result;
}