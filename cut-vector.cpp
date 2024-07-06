```cpp
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    int diff = INT_MAX;
    vector<int> minDiff;
    for (int i = 1; i < vec.size(); i++) {
        int currDiff = abs(vec[i] - vec[i-1]);
        if (currDiff < diff) {
            diff = currDiff;
            minDiff.clear();
            minDiff.push_back(vec[i-1]);
            minDiff.push_back(vec[i]);
        }
    }

    res[0].assign(minDiff.begin(), minDiff.end());
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == minDiff.back()) {
            res[1].push_back(vec[i]);
            break;
        }
    }
    res[1].assign(vec.begin() + minDiff.size(), vec.end());

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