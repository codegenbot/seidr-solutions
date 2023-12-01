#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> maximum(const vector<int>& arr, int k) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(), greater<int>());
    vector<int> result(sorted_arr.begin(), sorted_arr.begin() + k);
    return result;
}