#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;

    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size()) {
            vector<int> left(v.begin(), v.begin() + i);
            vector<int> right(v.begin() + i, v.end());
            int diff = absaccumulate(left.begin(), left.end(), 0) - absaccumulate(right.begin(), right.end(), 0);
            if (diff < min_diff) {
                min_diff = diff;
                res = {left, right};
            }
        } else if (absaccumulate(v.begin(), v.begin() + i, 0) == absaccumulate(v.begin() + i, v.end(), 0)) {
            vector<int> left(v.begin(), v.begin() + i);
            vector<int> right(v.begin() + i, v.end());
            res = {left, right};
            break;
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "{";
    for (const auto &num : result.first) {
        cout << num << " ";
    }
    cout << "}" << endl;
    cout << "{";
    for (const auto &num : result.second) {
        cout << num << " ";
    }
    cout << "0" << endl;

    return 0;
}