#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        bool is_leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) res.push_back(arr[i]);
    }
    return res;
}