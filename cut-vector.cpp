#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    long long sum1 = 0;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum1 += v[i];
        } else {
            long long leftSum = 0;
            for (int j = 0; j <= i; j++) {
                leftSum += v[j];
            }
            long long rightSum = sum1 - leftSum;
            if (abs(leftSum - rightSum) <= abs(v[0] - rightSum)) {
                res[0].insert(res[0].end(), v.begin(), v.begin() + i + 1);
                for (int j = i; j < n; j++) {
                    res[1].push_back(v[j]);
                }
                break;
            }
        }
    }
    
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
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}