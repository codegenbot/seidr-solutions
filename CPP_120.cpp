#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.end());
    sort(result.rbegin(), result.rend());
    return vector<int>(result.begin(), result.begin() + k);
}