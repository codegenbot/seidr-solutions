#include <algorithm>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {};

    int smallest_even = *min_element(arr.begin(), arr.end(), 
                                 [](int a, int b) { return (a % 2 == 0 && ! (b % 2 == 0)); });
    
    auto it = find(arr.begin(), arr.end(), smallest_even);
    size_t index = distance(arr.begin(), it);
    result.push_back({smallest_even, index});
    return result;
}