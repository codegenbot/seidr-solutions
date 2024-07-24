#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for(int i = 0; i < vec.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        
        for(int j = i; j < vec.size(); j++) {
            rightSum += vec[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(diff <= minDiff) {
            minDiff = diff;
            result.first = vector<int>(vec.begin(), vec.begin() + i);
            result.second = vector<int>(vec.begin() + i, vec.end());
        }
    }
    
    return result;
}