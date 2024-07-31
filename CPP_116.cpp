#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<int> result;
    
    for (int i = 0; i < arr.size(); i++) {
        int ones = __builtin_popcount(arr[i]);
        result.push_back({ones, arr[i]});
    }
    
    sort(result.begin(), result.end());
    
    vector<int> sortedArray;
    for (auto &item : result) {
        sortedArray.push_back(item.second);
    }
    
    return sortedArray;
}