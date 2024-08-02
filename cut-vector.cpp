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
    result[0].resize(cutIndex + 1);
    for (int i = 0; i <= cutIndex; i++) {
        result[0].push_back(v[i]);
    }
    result[1].resize(v.size() - cutIndex - 1);
    for (int i = cutIndex + 1; i < v.size(); i++) {
        result[1].push_back(v[i]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<vector<int>> result = cutVector(v);

    for (auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}