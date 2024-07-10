#include <vector>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> left, right;
    
    for(int i = 0; i < n - 1; i++) {
        if(v[i] == v[i+1]) {
            left = v.substr(0, i + 1);
            right = v.substr(i + 1, n - i - 1);
            return {left, right};
        }
    }
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i = 1; i < n; i++) {
        if(abs(v[i] - v[0]) < minDiff) {
            minDiff = abs(v[i] - v[0]);
            cutIndex = i;
        }
    }
    
    left = vector<int>(v.begin(), v.begin() + cutIndex);
    right = vector<int>(v.begin() + cutIndex, v.end());
    return {left, right};
}