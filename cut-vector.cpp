#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    return {{v.begin(), v.begin() + cut_index}, {v.begin() + cut_index, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    auto result = cutVector(v);
    cout << "[";
    for (const auto &x : result[0]) {
        cout << x << " ";
    }
    cout << "] [" << "[";
    for (const auto &x : result[1]) {
        cout << x << " ";
    }
    cout << "]";
    return 0;
}