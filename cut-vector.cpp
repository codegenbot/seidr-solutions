#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for(int i = 1; i < v.size(); i++) {
        if(abs(v[i] - v[0]) <= minDiff) {
            minDiff = abs(v[i] - v[0]);
            splitIndex = i;
        }
    }
    
    vector<int> left = {v[0]};
    vector<int> right = v;
    right.erase(right.begin() + splitIndex);
    
    return make_pair(left, right);
}