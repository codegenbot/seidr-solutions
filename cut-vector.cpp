#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        
        for (int j = i + 1; j < vec.size(); j++) {
            rightSum += vec[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec(vec.begin(), vec.begin() + cutIndex + 1);
    vector<int> rightVec(vec.begin() + cutIndex + 1, vec.end());
    
    return {leftVec, rightVec};
}