#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (i == n - 1 || arr[i] >= max(arr.begin() + i + 1, arr.end())) {
            result.push_back(arr[i]);
        }
    }
    return result;