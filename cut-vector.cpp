#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i < n; ++i) {
        int diff = abs(vec[i] - vec[0]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    return {vector<int>(vec.begin(), vec.begin() + cutIndex), vector<int>(vec.begin() + cutIndex, vec.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "0\n";
    for (const auto& num : result.first) {
        cout << num << '\n';
    }
    return 0;
}