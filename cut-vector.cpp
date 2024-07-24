#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<vector<int>> result(2);
    result[0].resize(cutIndex + 1);
    result[1].resize(vec.size() - cutIndex - 1);
    copy(vec.begin(), vec.begin() + cutIndex + 1, result[0].begin());
    copy(vec.begin() + cutIndex + 1, vec.end(), result[1].begin());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) {
        cin >> x;
    }
    vector<vector<int>> res = cutVector(vec);
    for (const auto& v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}