#include <vector>
#include <algorithm>

bool mySame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

vector<int> myMaximum(vector<int> arr, int k) {
    if(k >= arr.size()) {
        vector<int> result(arr.begin(), arr.end());
        sort(result.begin(), result.end());
        return result;
    } else {
        vector<int> result(arr.begin(), arr.begin() + k);
        sort(result.begin(), result.end());
        return result;
    }
}