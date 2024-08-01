#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i=1; i<v.size(); i++) {
        int diff = abs(v[i-1] - v[i]);
        if(diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cutIndex);
    vector<int> right(v.begin() + cutIndex, v.end());
    vector<vector<int>> result = {{left}, {right}};
    return result[0].insert(result[0].end(), right.begin(), right.end()).first - result[0].begin();
}