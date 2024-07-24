#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_point = 0;

    for (int i = 1; i < v.size(); i++) {
        if (abs(v[i] - v[0]) < min_diff) {
            min_diff = abs(v[i] - v[0]);
            split_point = i;
        }
    }

    return {vector<int>(v.begin(), v.begin() + split_point), vector<int>(v.begin() + split_point, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "[";
    for (const auto& x : result.first) cout << x << " ";
    cout << "] [";

    for (const auto& x : result.second) cout << x << " ";

    cout << "]\n";

    return 0;
}