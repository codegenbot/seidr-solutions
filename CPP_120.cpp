#include <algorithm>
#include <functional>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    // Function implementation here
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}