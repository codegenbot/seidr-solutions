#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            res.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    res.push_back(rightmost);
    reverse(res.begin(), res.end());
    return res;
}