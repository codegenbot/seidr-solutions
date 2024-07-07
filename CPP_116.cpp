#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<pair<int, int>> pairArr;
    
    for(int i = 0; i < arr.size(); i++) {
        int onesCount = __builtin_popcount(arr[i]);
        pairArr.push_back({onesCount, arr[i]});
    }
    
    sort(pairArr.begin(), pairArr.end());
    
    vector<int> result;
    for(auto p : pairArr) {
        result.push_back(p.second);
    }
    
    return result;
}