#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i <= n - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += vec[j];
        }
        
        if (leftSum == rightSum) {
            res.first = vector<int>(vec.begin(), vec.begin() + i);
            res.second = vector<int>(vec.begin() + i, vec.end());
            return res;
        }
    }
    
    int minDiff = INT_MAX, bestIndex = 0;
    
    for (int i = 1; i <= n - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += vec[j];
        }
        
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            bestIndex = i;
        }
    }
    
    res.first = vector<int>(vec.begin(), vec.begin() + bestIndex);
    res.second = vector<int>(vec.begin() + bestIndex, vec.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec) {
        cin >> i;
    }
    pair<vector<int>, vector<int>> res = cutVector(vec);
    cout << "1 ";
    for (const auto &i : res.first) {
        cout << i << " ";
    }
    cout << endl;
    cout << "0 ";
    for (const auto &i : res.second) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}