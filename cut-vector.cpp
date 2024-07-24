#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for(int i = 1; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for(int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + splitIndex);
    vector<int> right(v.begin() + splitIndex, v.end());
    
    return {left, right};
}