#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    return x == y;
}

vector<int> maximum(vector<int> arr,int k){
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}