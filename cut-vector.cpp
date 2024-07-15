#include <vector>
#include <cmath>  // Include this header for abs function
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    if (n == 1) {
        return {{v[0]}, {v[0]}};
    }

    int diff = INT_MAX, idx = -1;
    for (int i = 0; i < n; i++) {
        int temp_diff = abs(v[i] - v[0]);
        if (temp_diff <= diff) {
            diff = temp_diff;
            idx = i;
        }
    }

    res[0].assign(v.begin(), v.end() - idx);
    res[1].assign(v.begin() + idx, v.end());

    return res;
}

int main() {
    // Your code here
    return 0;
}