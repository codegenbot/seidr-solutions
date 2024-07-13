#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    vector<vector<int>> result;

    for (int i = 1; i < v.size(); ++i) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            result = {{v[0]}};
            result.push_back({v.begin() + 1, v.end()});
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<vector<int>> result = cutVector(v);

    cout << "[";
    for (const auto& vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "\n";
    }
    cout << "]";

    return 0;
}