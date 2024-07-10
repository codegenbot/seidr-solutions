#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int sum_left = accumulate(v.begin(), v.begin() + i, 0);
        int sum_right = accumulate(v.begin() + i, v.end(), 0);
        
        if (sum_left == sum_right) {
            return {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
        } else {
            int diff = abs(sum_left - sum_right);
            if (diff < min_diff) {
                min_diff = diff;
                cut_index = i;
            }
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + cut_index), vector<int>(v.begin() + cut_index, v.end())};
}