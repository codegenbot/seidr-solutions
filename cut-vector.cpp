#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int index = 0;
    for (int i = 1; i < v.size(); i++) {
        if (abs(v[i] - v[0]) <= min_diff) {
            min_diff = abs(v[i] - v[0]);
            index = i;
        }
    }
    vector<int> left(v.begin(), v.begin() + index);
    vector<int> right(v.begin() + index, v.end());
    return make_pair(left, right);
}