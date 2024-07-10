#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; j++) {
            sum_left += v[j];
        }
        for (int j = i + 1; j < v.size(); j++) {
            sum_right += v[j];
        }
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left(v.begin(), v.begin() + cut_index + 1);
    vector<int> right(v.begin() + cut_index, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}