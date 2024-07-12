#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left = {v[0]};
    for (int i = 1; i <= cutIndex; i++) {
        left.push_back(v[i]);
    }
    
    vector<int> right = v;
    right.erase(right.begin(), right.begin() + cutIndex);
    
    return make_pair(left, right);
}