#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i < v.size(); ++i) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + cutIndex), vector<int>(v.begin() + cutIndex, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "[";
    for (const auto &x : res.first) cout << x << " ";
    cout << "] [";

    for (const auto &x : res.second) cout << x << " ";

    cout << "]\n";

    return 0;
}