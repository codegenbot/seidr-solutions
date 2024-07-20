#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    vector<vector<int>> res(2);
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            res[0].clear();
            res[1].clear();
            res[0].push_back(v[0]);
            res[1].push_back(v[i]);
            for (int j = 1; j < i; j++) {
                res[1].push_back(v[j]);
            }
        }
    }
    return res;
}