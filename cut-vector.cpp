#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int idx = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].reserve(n - idx);
    for (int i = 1; i <= idx; i++) {
        result[0].push_back(v[i]);
    }
    result[1] = v.erase(v.begin(), v.begin() + idx + 1);
    
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
    
    for (const auto& subvec : res) {
        cout << "[";
        for (int num : subvec) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}