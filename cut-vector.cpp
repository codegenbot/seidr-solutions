```
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + split_index);
    vector<int> right(v.begin() + split_index, v.end());
    
    return make_pair(left, right);
}