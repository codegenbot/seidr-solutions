#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] - vec[0] <= minDiff) {
            minDiff = vec[i] - vec[0];
            cutIndex = i;
        }
    }

    vector<int> left = {vec[0]};
    vector<int> right;

    for (int i = 1; i < cutIndex; ++i) {
        left.push_back(vec[i]);
    }

    for (int i = cutIndex; i < vec.size(); ++i) {
        right.push_back(vec[i]);
    }

    return {left, right};
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(vec);

    cout << "[";

    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << "]";

    cout << "\n[";

    for (auto x : result.second) {
        cout << x << " ";
    }

    cout << "]";

    return 0;
}