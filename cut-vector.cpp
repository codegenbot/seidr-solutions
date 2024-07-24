#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        
        for (int j = i; j < vec.size(); j++) {
            rightSum += vec[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec(vec.begin(), vec.begin() + splitIndex);
    vector<int> rightVec(vec.begin() + splitIndex, vec.end());
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "[";
    for (const auto &x : result.first) cout << x << " ";
    cout << "] ["; 
    for (const auto &x : result.second) cout << x << " ";
    cout << "]" << endl;
    
    return 0;
}