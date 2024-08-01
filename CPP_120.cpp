#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    if(k > arr.size()) {
        vector<int> result(arr.begin(), arr.end());
        sort(result.begin(), result.end());
        return result;
    }
    else{
        vector<int> result(arr.begin(), arr.begin() + k);
        sort(result.begin(), result.end());
        return result;
    }
}