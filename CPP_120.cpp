#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), min(arr.begin() + k, arr.end()));
    sort(result.begin(), result.end());
    return result;
}