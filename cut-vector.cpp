#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;

    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
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

    cout << "[";
    for (int i = 0; i < res.first.size() - 1; i++) {
        cout << res.first[i] << " ";
    }
    cout << res.first.back() << "]\n[";
    for (int i = 0; i < res.second.size() - 1; i++) {
        cout << res.second[i] << " ";
    }
    cout << res.second.back() << "]\n";

    return 0;
}