#include <algorithm>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {{}}; // instead of return {};

    int smallest_even = *min_element(arr.begin(), arr.end(), 
                                 [](int a, int b) { return (a % 2 == 0 && ! (b % 2 == 0)); });
    
    auto it = find(arr.begin(), arr.end(), smallest_even);
    result.push_back({smallest_even, distance(arr.begin(), it)});
    return result;
}