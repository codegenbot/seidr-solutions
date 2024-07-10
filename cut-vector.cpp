#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    return {{v.begin(), v.begin() + index}, {v.begin() + index, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    for (const auto& vec : result) {
        for (const auto& num : vec) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}