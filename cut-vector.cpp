#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            return {{v.begin(), v.begin() + i + 1}, {v.begin() + i, v.end()}};
        }
    }
    return {{v.begin(), v.end()}, {}};
}