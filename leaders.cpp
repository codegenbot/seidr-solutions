```
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int maxRight = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            res.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}