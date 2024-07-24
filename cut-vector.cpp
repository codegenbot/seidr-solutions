#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    pair<int, int> idx;

    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            idx.first = i;
            idx.second = i + 1;
        }
    }

    vector<int> left(v.begin(), v.begin() + idx.first);
    vector<int> right(v.begin() + idx.second, v.end());

    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "Cut at index: ";
    for (int i = 0; i < res.first.size(); i++) {
        cout << res.first[i] << " ";
    }
    cout << endl;
    cout << "First part: ";
    for (auto x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second part: ";
    for (int i = 0; i < res.second.size(); i++) {
        cout << res.second[i] << " ";
    }
    cout << endl;

    return 0;
}