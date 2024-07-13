#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || v[i] != v[i + 1]) {
            result.push_back({v.begin(), v.begin() + i + 1});
            break;
        }
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
    vector<vector<int>> res = cutVector(v);
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}