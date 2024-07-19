#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long left_sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            left_sum += v[i];
        } else {
            int diff = abs(left_sum - (n * v[i] - left_sum));
            res[0].push_back(v[i]);
            for (int j = i + 1; j < n; j++) {
                if (abs(left_sum - (j * v[j] - left_sum)) <= diff) {
                    res[0].push_back(v[j]);
                } else {
                    res[1] = vector<int>(v.begin() + i, v.end());
                    break;
                }
            }
            break;
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