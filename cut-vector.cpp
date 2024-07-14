#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < v.size(); ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j)
            sum1 += v[j];
        for (int j = i; j < v.size(); ++j)
            sum2 += v[j];

        if (sum1 == sum2) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }

        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + idx);
    vector<int> right(v.begin() + idx, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "[";
    for (int x : result.first) {
        cout << x;
        if (&x != &result.first.back())
            cout << ", ";
    }
    cout << "] [";
    for (int x : result.second) {
        cout << x;
        if (&x != &result.second.back())
            cout << ", ";
    }
    cout << "0]" << endl;

    return 0;
}