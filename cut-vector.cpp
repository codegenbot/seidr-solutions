#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++)
            leftSum += vec[j];
        for (int j = i + 1; j < vec.size(); j++)
            rightSum += vec[j];
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec(vec.begin(), vec.begin() + splitIndex + 1);
    vector<int> rightVec(vec.begin() + splitIndex + 1, vec.end());
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "Left: ";
    for (int num : result.first)
        cout << num << " ";
    cout << std::endl;
    
    cout << "Right: ";
    for (int num : result.second)
        cout << num << " ";
    cout << std::endl;
    
    return 0;
}