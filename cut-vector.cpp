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
    return {vector<int>{left.begin(), left.end()}, vector<int>{right.begin(), right.end()}};
}