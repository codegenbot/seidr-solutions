#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int pos = -1;
    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < n; j++) {
            right_sum += v[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + pos), vector<int>(v.begin() + pos, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "#1 ";
    for (auto x : res.first) {
        cout << x << " ";
    }
    cout << "\n";
    cout << "#2 ";
    for (auto x : res.second) {
        cout << x << " ";
    }
    return 0;
}