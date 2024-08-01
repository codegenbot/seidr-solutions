#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    vector<vector<int>> result;
    int min_diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i+1]);
        if (diff == 0) {
            result.push_back({v.begin(), v.end()});
            return result;
        } else if (diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + idx);
    vector<int> right(v.begin() + idx, v.end());
    result.push_back(left);
    result.push_back(right);
    return result;
}