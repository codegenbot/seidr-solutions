#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), v.begin(), v.begin() + cutIndex + 1);
    result[1].insert(result[1].begin(), v.begin() + cutIndex + 1, v.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto &v : res) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}