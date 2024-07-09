Here is the completed code:

#include <bits/stdc++.h>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<int> res;
    for (int num : arr) {
        int ones = __builtin_popcount(num);
        res.push_back({ones, num});
    }
    sort(res.begin(), res.end());
    vector<int> result;
    for (auto x : res) {
        result.push_back(x.second);
    }
    return result;
}