#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<int> result;
    
    for (int i = 0; i < arr.size(); i++) {
        int ones = __builtin_popcount(arr[i]);
        if (i == 0 || ones != __builtin_popcount(arr[i-1])) {
            result.push_back(arr[i]);
        } else {
            bool inserted = false;
            for (int j = 0; j < result.size(); j++) {
                if (ones >= __builtin_popcount(result[j])) {
                    result.insert(j, arr[i]);
                    inserted = true;
                    break;
                }
            }
            if (!inserted) {
                result.push_back(arr[i]);
            }
        }
    }
    
    return result;
}