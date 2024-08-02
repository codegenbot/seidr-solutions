#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < n; ++i) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < i; ++j) {
            sum_left += v[j];
        }
        for (int j = i; j < n; ++j) {
            sum_right += v[j];
        }

        if (sum_left == sum_right) {
            return {{}, {v.begin(), v.end()}};
        } else if (abs(sum_left - sum_right) < min_diff) {
            min_diff = abs(sum_left - sum_right);
            cut_index = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + cut_index);
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
    
    auto res = cutVector(v);

    cout << "{";
    for (auto x : res.first) {
        cout << x << " ";
    }
    cout << "}" << endl;

    cout << "{";
    for (auto x : res.second) {
        cout << x << " ";
    }
    cout << "0" << endl;
    
    return 0;
}