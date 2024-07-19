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
            long long sum2 = sum1 + v[i] - (i > 0 ? v[i-1] : 0);
            res[0].push_back(v[i]);
            while (abs(sum1 - sum2) >= abs(sum1 - (sum2 - v[i]))) {
                if (i % 2 == 0) {
                    sum1 -= v[i];
                } else {
                    sum2 -= v[i];
                }
                res[0].pop_back();
                i--;
            }
        }
    }
    
    for (int i = n; i > 0; i--) {
        if (i % 2 != 0) {
            long long sum1 = sum2 + v[i-1] - (n > i ? v[n-1] : 0);
            while (abs(sum1 - sum2) >= abs(sum1 - (sum2 - v[i-1]))) {
                if (i % 2 == 0) {
                    sum1 -= v[i-1];
                } else {
                    sum2 -= v[i-1];
                }
                res[1].push_back(v[i-1]);
                i++;
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