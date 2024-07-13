#include <climits>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    vector<vector<int>> result;
    
    for(int i=1; i<v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j=0; j<i; j++) {
            leftSum += v[j];
        }
        
        for(int j=i; j<v.size(); j++) {
            rightSum += v[j];
        }
        
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            result = {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
    }
    
    return result;
}