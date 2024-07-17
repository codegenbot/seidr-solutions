#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i < v.size(); i++) {
        if (abs(v[i] - v[0]) <= minDiff) {
            minDiff = abs(v[i] - v[0]);
            index = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + index), vector<int>(v.begin() + index, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (const auto &i : result.first) {
        cout << i << " ";
    }
    cout << "]," << endl;
    cout << "[";
    for (const auto &i : result.second) {
        cout << i << " ";
    }
    cout << "]" << endl;
    return 0;
}