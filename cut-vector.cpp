#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {{v.begin(), v.begin() + splitIndex}, {v.begin() + splitIndex, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;

    auto res = cutVector(v);

    cout << "{";
    for (const auto& x : res[0]) cout << x << " ";
    cout << "}" << endl;

    cout << "{";
    for (const auto& x : res[1]) cout << x << " ";
    cout << "}" << endl;

    return 0;
}