#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for (int i = 1; i <= n; i++) {
        if (vec[i-1] == vec[n-i]) {
            result.push_back({vec.begin(), vec.end()});
            return {{}, {}}; // or any other way you want to handle the case where both sides are equal
        }
    }
    
    int minDiff = INT_MAX;
    for (int i = 0; i < n; i++) {
        int diff = abs(vec[i] - vec[n-i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            result = {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;
    auto res = cutVector(vec);
    for (const auto& v : res) {
        for (auto x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}