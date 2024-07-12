#include <iostream>
using namespace std;

#include <vector>

vector<vector<int>> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    
    int minDiff = INT_MAX;
    int minDiffIndex = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(vec[i] - vec[0]) - abs(vec[i-1] - vec[0]);
        
        if (diff == 0) {
            res[0] = vector<int>(vec.begin(), vec.begin() + i);
            res[1] = vector<int>(vec.begin() + i, vec.end());
            return res;
        }
        
        if (abs(diff) < minDiff) {
            minDiff = abs(diff);
            minDiffIndex = i;
        }
    }
    
    res[0] = vector<int>(vec.begin(), vec.begin() + minDiffIndex);
    res[1] = vector<int>(vec.begin() + minDiffIndex, vec.end());
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