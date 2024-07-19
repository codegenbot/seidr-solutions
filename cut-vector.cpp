#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int min_diff = INT_MAX;
    int split_index = -1;
    
    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            sum2 += v[j];
        }
        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    for (int i = 0; i <= split_index; i++) {
        res[0].push_back(v[i]);
    }
    for (int i = split_index + 1; i < n; i++) {
        res[1].push_back(v[i]);
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