#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        if ((v[i] == v[i + 1]) || (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1]))) {
            return {{v.begin(), v.begin() + i + 1}, {v.begin() + i + 1, v.end()}};
        }
    }
    return {{v}, {}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto result = cutVector(v);
    cout << "[";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << "] [";
    for (auto x : result[1]) {
        cout << x << " ";
    }
    cout << "]" << endl;
    return 0;
}