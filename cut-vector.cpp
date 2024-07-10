#include <vector>
#include <limits> 
#include <numeric>
#include <cmath>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = numeric_limits<int>::max();
    pair<vector<int>, vector<int>> result;
    
    for(int i = 1; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        rightSum = accumulate(v.begin() + i, v.end(), 0);
        
        int diff = std::abs(leftSum - rightSum);
        
        if(diff < minDiff) {
            minDiff = diff;
            result = {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
        }
    }
    
    return result;
}