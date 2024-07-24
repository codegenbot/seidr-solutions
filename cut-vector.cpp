#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec(0);
    for (int i = 0; i < cutIndex; i++) {
        leftVec.push_back(vec[i]);
    }
    
    vector<int> rightVec(0);
    for (int i = cutIndex; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }
    
    return {leftVec, rightVec};
}