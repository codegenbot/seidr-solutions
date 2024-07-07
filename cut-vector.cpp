#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int idx = 0;
    
    for(int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if(diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + idx);
    vector<int> right(vec.begin() + idx, vec.end());
    
    return make_pair(left, right);
}