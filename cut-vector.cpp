#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec = vector<int>(vec.begin(), vec.begin() + splitIndex);
    vector<int> rightVec = vector<int>(vec.begin() + splitIndex, vec.end());
    
    return {leftVec, rightVec};
}

pair<vector<int>, vector<int>> result = cutVector(vec);