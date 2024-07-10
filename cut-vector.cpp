#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            res[0].push_back(v.begin(), v.end());
            res[1].clear();
            return res;
        }
        
        if (v[i] > 0) {
            int leftSum = 0, rightSum = 0;
            for (int j = i; j >= 0 && j < n; j--) {
                leftSum += v[j];
            }
            for (int j = i + 1; j < n; j++) {
                rightSum += v[j];
            }
            
            if (leftSum == rightSum) {
                res[0].assign(v.begin(), v.begin() + i);
                res[1].assign(v.begin() + i, v.end());
                return res;
            } else if (abs(leftSum - rightSum) < minDiff) {
                minDiff = abs(leftSum - rightSum);
                pos = i;
            }
        }
    }
    
    res[0].assign(v.begin(), v.begin() + pos);
    res[1].assign(v.begin() + pos, v.end());
    return res;
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
            cout << x;
        }
        cout << '\n';
    }
    
    return 0;
}