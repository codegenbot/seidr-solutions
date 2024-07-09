#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    pair<int, int> smallest = make_pair(INT_MAX, 0);
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest.first) {
            smallest = make_pair(arr[i], i);
        }
    }
    
    if (smallest.first != INT_MAX) {
        result.push_back(smallest);
    } else {
        result.push_back({});
    }
    
    return result;
}