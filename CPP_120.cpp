#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result = arr.substr(0, k);
    sort(result.begin(), result.end());
    return result;
}