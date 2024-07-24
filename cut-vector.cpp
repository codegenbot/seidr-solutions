#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int split_idx = -1;
    
    for (int i = 0; i < n; ++i) {
        int left_sum = accumulate(vec.begin(), vec.begin() + i, 0);
        int right_sum = accumulate(vec.begin() + i, vec.end(), 0);
        
        if (left_sum == right_sum) {
            return {{}, {vec.begin(), vec.end()}};
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    
    vector<int> left_vec(vec.begin(), vec.begin() + split_idx);
    vector<int> right_vec({vec.begin() + split_idx, vec.end()});
    
    return {left_vec, right_vec};
}