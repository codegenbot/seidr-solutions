#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int max_val = *max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        auto it = arr.begin();
        while (*it != max_val) it++;
        arr.erase(it);
    }
    return result;
}