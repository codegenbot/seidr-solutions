```cpp
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    if (n == 0)
        return res;
        
    res[0] = vector<int>(1, v[0]);
    for (int i = 1; i < n; i++) {
        if ((res[0].back() - v[i]) <= abs(v[n-1] - v[i])) {
            res[0].push_back(v[i]);
        } else {
            res[0].push_back(v[i]);
            res.push_back(vector<int>(1, v[i]));
            break;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if ((v[i] - res[0].back()) <= abs(res[1][0] - v[n-1])) {
            res[0].push_back(v[i]);
        } else {
            res[0].push_back(v[i]);
            break;
        }
    }

    return res;
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    auto result = cutVector(input);
    return 0;
}