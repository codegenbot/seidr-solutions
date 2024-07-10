#include <vector>
#include <limits> 
#include <numeric>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = numeric_limits<int>::max();
    pair<vector<int>, vector<int>> result;
    
    if(v.size() == 1) return {v, vector<int>()};
    
    for(int i = 1; i < v.size(); i++) {
        if(i == 1) {
            int leftSum = v[0];
            int rightSum = accumulate(v.begin() + i, v.end(), 0);
            
            if(abs(leftSum - rightSum) < minDiff) {
                minDiff = abs(leftSum - rightSum);
                result = {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
            }
        } else {
            int leftSum = 0;
            
            for(int j = 0; j < i; j++) {
                leftSum += v[j];
            }
            
            int rightSum = accumulate(v.begin() + i, v.end(), 0);
            
            int diff = abs(leftSum - rightSum);
            
            if(diff < minDiff) {
                minDiff = diff;
                result = {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
            }
        }
    }
    
    return result;
}