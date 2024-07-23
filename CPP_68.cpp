#include <algorithm>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {};

    int smallest_even = *min_element_if([](int x) {return x%2==0;}, arr.begin(), arr.end());
    
    auto it = find(arr.begin(), arr.end(), smallest_even);
    result.push_back({smallest_even, distance(arr.begin(), it)});
    return result;
}