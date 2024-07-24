#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;

    for (int i = 1; i <= v.size(); i++) {
        vector<int> left(v.begin(), v.begin() + i);
        vector<int> right(v.begin() + i, v.end());
        if (left.size() == right.size()) {
            return {left, right};
        }
        int diff = abs((int)accumulate(left.begin(), left.end(), 0) - (int)accumulate(right.begin(), right.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            result = {left, right};
        }
    }

    return result;
}

int main() {
    vector<int> v1({1});
    pair<vector<int>, vector<int>> res1 = cutVector(v1);
    for (auto x : res1.first) cout << x << " ";
    cout << endl;
    for (auto x : res1.second) cout << x << " ";
    cout << endl;

    return 0;
}