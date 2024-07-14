#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int> arr) {
    vector<int> res;
    int max = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= max) {
            res.push_back(arr[i]);
            max = arr[i];
        }
    }
    res = vector<int>(res.begin(), res.end());
    return res;
}