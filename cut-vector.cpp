#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVector(v.begin(), v.begin() + splitIndex);
    vector<int> rightVector(v.begin() + splitIndex, v.end());
    
    return {leftVector, rightVector};
}