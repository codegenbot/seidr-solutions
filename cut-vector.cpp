#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i <= v.size(); ++i) {
        if (v[i-1] == v[v.size()-1]) {
            return {{}, {v.begin(), v.end()}};
        }
        int diff = abs(v[i-1] - v.back());
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    return {{}, vector<int>(v.begin(), v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << "] [" << "[";
    for (int y : res.second) {
        cout << y << " ";
    }
    cout << "] 0" << endl;
    return 0;
}