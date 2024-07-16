#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || v[i-1] != v[i]) {
            int diff = abs((v[0] + v[v.size()-1] - 2 * v[i-1]) / 2 - v[i]);
            if (diff < minDiff) {
                minDiff = diff;
                index = i;
            }
        }
    }
    vector<int> left(v.begin(), v.begin() + index);
    vector<int> right(v.begin() + index, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for (int i : result.first) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int i : result.second) {
        cout << i << " ";
    }
    return 0;
}