#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j)
            left_sum += v[j];
        
        for (int j = i; j < n; ++j)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            return {{}, {v.begin(), v.end()}};
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());
    
    return {left, right};
}