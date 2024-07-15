```c++
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    if(n == 1) {
        res[0] = v;
        return res;
    }

    int minDiff = INT_MAX, idx = -1;
    for(int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[0]);
        if(diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }

    res[0].resize(idx);
    for(int i = 0; i < idx; i++)
        res[0].push_back(v[i]);

    res[1] = v;
    for(int i = idx; i < n; i++)
        res[1].push_back(v[i]);

    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<vector<int>> result = cutVector(v);
    // process the result here
    return 0;
}