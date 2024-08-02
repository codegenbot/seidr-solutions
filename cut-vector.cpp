#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left = {v[0]};
    vector<int> right = v;
    for (int i = 1; i <= split_index; i++) {
        left.push_back(v[i]);
    }
    right.erase(right.begin() + split_index, right.end());
    
    return make_pair(left, right);
}