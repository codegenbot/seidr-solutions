#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i=0; i<v.size()-1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j=0; j<i; j++) 
            leftSum += v[j];
        for(int j=i+1; j<v.size(); j++) 
            rightSum += v[j];
        
        int leftSum = 0, rightSum = 0;

        for(int j=0; j<i; j++) 
            leftSum += v[j];
        for(int j=i+1; j<v.size(); j++) 
            rightSum += v[j];

        if(abs(leftSum - rightSum) <= minDiff || cutIndex == -1) {
            if(cutIndex != -1 && abs(leftSum - rightSum) > 0) {
                minDiff = abs(leftSum - rightSum);
                cutIndex = i;
            }
        }
    }
    
    vector<vector<int>> result(2);
    result[0].reserve(cutIndex+1);
    for(int i=0; i<=cutIndex; i++) 
        result[0].push_back(v[i]);
    result[1].reserve(v.size()-cutIndex-1);
    for(int i=cutIndex+1; i<v.size(); i++) 
        result[1].push_back(v[i]);
    
    return result;
}