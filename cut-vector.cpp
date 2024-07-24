#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int index = 0;
    pair<vector<int>, vector<int>> res = {v, {}};

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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "{";
    for (int num : res.first) {
        cout << num << " ";
    }
    cout << "}, {" << endl;
    for (int num : res.second) {
        cout << num << " ";
    }
    return 0;
}