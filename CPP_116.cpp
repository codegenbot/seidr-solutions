#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<pair<int, int>> pairs;
    
    for (int num : arr) {
        int ones = __builtin_popcount(num);
        pairs.push_back({ones, num});
    }
    
    sort(pairs.begin(), pairs.end());
    
    vector<int> result;
    
    for (const auto& pair : pairs) {
        result.push_back(pair.second);
    }
    
    return result;
}