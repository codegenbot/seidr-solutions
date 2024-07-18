#include <vector>

bool issame(int a, int b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k){
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}