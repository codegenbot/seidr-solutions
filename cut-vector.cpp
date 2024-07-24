#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 0; i < n; ++i) {
        if (i == 0 || v[i] != v[0]) {
            int leftSum = 0, rightSum = 0;
            int leftCount = 0, rightCount = 0;
            
            for (int j = 0; j <= i; ++j) {
                leftSum += v[j];
                leftCount++;
            }
            
            for (int j = i + 1; j < n; ++j) {
                rightSum += v[j];
                rightCount++;
            }
            
            if (leftCount == rightCount && leftSum == rightSum) {
                res[0] = vector<int>(v.begin(), v.begin() + i);
                res[1] = vector<int>(v.begin() + i, v.end());
                return res;
            } else if (abs(leftSum - rightSum) < abs(leftSum - (n - 1 - rightCount)*v[0])) {
                res[0] = vector<int>(v.begin(), v.begin() + i);
                res[1] = vector<int>(v.begin() + i, v.end());
                return res;
            }
        }
    }
    
    res[0] = v;
    res[1].clear();
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    vector<vector<int>> res = cutVector(v);
    
    cout << "[";
    for (int i = 0; i < res[0].size(); ++i) {
        cout << res[0][i];
        if (i < res[0].size() - 1)
            cout << " ";
    }
    cout << "]\n";
    
    cout << "[";
    for (int i = 0; i < res[1].size(); ++i) {
        cout << res[1][i];
        if (i < res[1].size() - 1)
            cout << " ";
    }
    cout << "]\n";
    
    return 0;
}