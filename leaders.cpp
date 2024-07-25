#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int maxRight = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            res.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}