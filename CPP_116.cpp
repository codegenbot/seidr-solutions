Here is the completed code:

#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<int> result;
    
    for (int i = 0; i < arr.size(); i++) {
        int onesCount = __builtin_popcount(arr[i]);
        result.push_back({onesCount, arr[i]});
    }
    
    sort(result.begin(), result.end());
    
    vector<int> sortedArray;
    
    for (auto &x : result) {
        sortedArray.push_back(x.second);
    }
    
    return sortedArray;
}