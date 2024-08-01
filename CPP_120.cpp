#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    for(int i = 0; i < k; i++) {
        if(i > 0) {
            arr.erase(arr.begin());
        }
    }
    return arr;
}