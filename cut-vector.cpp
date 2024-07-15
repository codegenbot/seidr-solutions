#include <vector>
#include <iostream>
#include <utility>
#include <climits>
#include <numeric>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); ++i) {
        int leftSum = accumulate(v.begin(), v.begin() + i, 0);
        int rightSum = accumulate(v.begin() + i, v.end(), 0);
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    pair<vector<int>, vector<int>> result;
    result.first = vector<int>(v.begin(), v.begin() + splitIndex);
    result.second = vector<int>(v.begin() + splitIndex, v.end());
    
    return result;
}