#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;

    for (int i = 1; i < vec.size(); i++) {
        int diff = abs((int)vec[0] - vec[i]);
        if (diff <= min_diff) {
            min_diff = diff;
            result.first.clear();
            result.second.clear();
            result.first.assign(vec.begin(), vec.begin() + i);
            result.second.assign(vec.begin() + i, vec.end());
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    pair<vector<int>, vector<int>> res = cutVector(vec);

    cout << "{";
    for (auto x : res.first) {
        cout << x << " ";
    }
    cout << "}";
    cout << endl;

    cout << "{";
    for (auto x : res.second) {
        cout << x << " ";
    }
    cout << "0}";
    cout << endl;

    return 0;
}