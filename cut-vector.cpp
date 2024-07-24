#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<int, int> split_index;
    for (int i = 1; i < v.size(); ++i) {
        if (abs(v[i] - v[0]) <= min_diff) {
            min_diff = abs(v[i] - v[0]);
            split_index = {0, i};
        }
    }
    return {{v.begin(), v.begin() + split_index.second}} | 
           {{v.begin() + split_index.second, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << "]\n[";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << "]\n";
    return 0;
}