#include <iostream>
using namespace std;

#include <vector>

vector<vector<int>> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<vector<int>> res;
    
    for (int i = 1; i < n; i++) {
        if (vec[i] - vec[0] == vec[i-1] - vec[0]) {
            res.push_back(vector<int>(vec.begin(), vec.begin() + i));
            res.push_back(vector<int>(vec.begin() + i, vec.end()));
            return res;
        }
    }
    
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    res.push_back(vector<int>(vec.begin(), vec.begin() + pos));
    res.push_back(vector<int>(vec.begin() + pos, vec.end()));
    
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