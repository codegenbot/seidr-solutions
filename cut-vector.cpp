```cpp
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            for (int j = 0; j < n; ++j) {
                res[0].push_back(v[j]);
            }
            return {{}, res[0]};
        }
    }
    int mid = n / 2;
    for (int i = 0; i < mid; ++i) {
        res[0].push_back(v[i]);
    }
    for (int i = mid; i < n; ++i) {
        res[1].push_back(v[i]);
    }
    return res;
}