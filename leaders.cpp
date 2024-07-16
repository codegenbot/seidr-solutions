#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= arr.back()) {
            res.push_back(arr[i]);
        }
    }
    return res;
}