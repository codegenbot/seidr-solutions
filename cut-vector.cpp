#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int left = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != v[0]) {
            break;
        }
        left++;
    }

    int right = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] != v[v.size() - 1]) {
            break;
        }
        right++;
    }

    vector<int> leftVec(v.begin(), v.begin() + left);
    vector<int> rightVec(v.end() - right, v.end());

    return make_pair(leftVec, rightVec);
}