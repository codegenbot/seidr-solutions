#include <vector>
#include <initializer_list>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int rightmost = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            res.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}