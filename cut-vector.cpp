#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;

    for (int i = 1; i <= v.size() - 1; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "[";
    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;

    cout << "[";
    for (auto x : result.second) {
        cout << x << " ";
    }
    cout << "0]" << endl;

    return 0;
}