#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].reserve(cutIndex + 1);
    for(int i = 0; i <= cutIndex; i++) {
        result[0].push_back(vec[i]);
    }
    
    result[1].reserve(vec.size() - cutIndex - 1);
    for(int i = cutIndex + 1; i < vec.size(); i++) {
        result[1].push_back(vec[i]);
    }
    
    return result;
}