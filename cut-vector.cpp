#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<int, int> res;
    int min_diff = INT_MAX;
    for (int i = 0; i < n; i++) {
        int left_sum = accumulate(v.begin(), v.begin() + i, 0);
        int right_sum = accumulate(v.begin() + i, v.end(), 0);
        if (left_sum == right_sum) {
            res = make_pair(vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end()));
            return res;
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            res = make_pair(vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end()));
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "0" << endl;
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}