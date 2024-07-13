#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    for (int i = 1; i < v.size(); i++) {
        int diff = abs((accumulate(v.begin(), v.begin() + i, 0)) - (accumulate(v.begin() + i, v.end(), 0)));
        if (diff <= min_diff) {
            min_diff = diff;
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << accumulate(res.first.begin(), res.first.end(), 0) << endl;
    for (int x : res.second) {
        cout << x << " ";
    }
    return 0;
}