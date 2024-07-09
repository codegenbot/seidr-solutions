#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (res.empty() || arr[i] >= res.back()) {
            res.push_back(arr[i]);
        }
    }
    return res;
}