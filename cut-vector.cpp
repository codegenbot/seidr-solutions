#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }
        
        for (int j = i; j < v.size(); j++) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left, right;
    
    for (int i = 0; i < splitIndex; i++) {
        left.push_back(v[i]);
    }
    
    for (int i = splitIndex; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}