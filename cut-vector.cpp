#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    vector<vector<int>> result;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        for (int k = i + 1; k < vec.size(); k++) {
            rightSum += vec[k];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff == 0 || diff < minDiff) {
            result.push_back(vector<int>(vec.begin(), vec.begin() + i + 1));
            result.push_back(vector<int>(vec.begin() + i, vec.end()));
            minDiff = diff;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec) {
        cin >> i;
    }
    vector<vector<int>> res = cutVector(vec);
    for (const auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;