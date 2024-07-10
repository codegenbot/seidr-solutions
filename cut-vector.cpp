#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int idx;
    
    for (int i = 1; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++)
            leftSum += v[j];
        
        for (int j = i; j < v.size(); j++)
            rightSum += v[j];
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    vector<int> leftVec(v.begin(), v.begin() + idx);
    vector<int> rightVec(v.begin() + idx, v.end());
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "Left Vec: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "Right Vec: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}