```cpp
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    long long totalSum = 0;
    for (int i : v) {
        totalSum += i;
    }
    
    for (int i = 0; i < n; i++) {
        long long leftSum = 0, rightSum = totalSum - v[i];
        
        while (leftSum <= rightSum && i < n - 1) {
            if (leftSum == rightSum) {
                i--;
                break;
            }
            leftSum += v[i + 1];
            rightSum -= v[i + 1];
            i++;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + i);
    res[1] = vector<int>(v.begin() + i, v.end());
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
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i];
        if (i < res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i < res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}