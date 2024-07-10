#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_idx = 0;
    for (int i = 1; i < v.size(); ++i) {
        int diff = v[i] - v[0];
        if (diff <= min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + split_idx), vector<int>(v.begin() + split_idx, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "{";
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << "}" << endl;
    cout << "{";
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << "0" << endl;
    return 0;
}