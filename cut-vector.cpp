#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    
    for (int i = 1; i < n; i++) {
        if ((vec[i] - vec[0]) <= (vec[i-1] - vec[0])) {
            res[0] = vector<int>(vec.begin(), vec.begin() + i);
            res[1] = vector<int>(vec.begin() + i, vec.end());
            return res;
        }
    }
    
    if (n > 0) {
        res[0] = vector<int>(vec.begin(), vec.end());
        res[1] = {};
    } else {
        res[0] = {};
        res[1] = {};
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> result = cutVector(vec);
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "] [";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << "]\n";
    return 0;
}