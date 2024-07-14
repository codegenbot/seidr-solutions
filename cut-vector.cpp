#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= vec.size(); i++) {
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
    
    vector<vector<int>> result(2);
    result[0].resize(splitIndex);
    for (int i = 0; i < splitIndex; i++) {
        result[0].push_back(vec[i]);
    }
    result[1].resize(vec.size() - splitIndex);
    for (int i = splitIndex; i < vec.size(); i++) {
        result[1].push_back(vec[i]);
    }
    
    return result;
}