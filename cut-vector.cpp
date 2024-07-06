#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    vector<vector<int>> res(2);
    
    for (int i = 1; i < n; i++) {
        if (abs(vec[i] - vec[i-1]) == min_diff) {
            res[0].assign(vec.begin(), vec.begin() + i);
            res[1].assign(vec.begin() + i, vec.end());
            return res;
        } else if (vec[i] - vec[i-1] < min_diff) {
            min_diff = vec[i] - vec[i-1];
        }
    }
    
    // If the input vector is empty or all elements are equal
    res[0].assign(vec.begin(), vec.end());
    res[1].clear();
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i] << " ";
    }
    cout << "] [" << "[";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i] << " ";
    }
    cout << "]";
    return 0;
}