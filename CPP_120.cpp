#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}