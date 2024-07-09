#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) left_sum += vec[j];
        for (int j = i; j < n; j++) right_sum += vec[j];
        
        if (left_sum == right_sum) {
            res.first = vector<int>(vec.begin(), vec.begin() + i);
            res.second = vector<int>(vec.begin() + i, vec.end());
            return res;
        }
    }
    
    int min_diff = INT_MAX, split_idx = -1;
    for (int i = 1; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) left_sum += vec[j];
        for (int j = i; j < n; j++) right_sum += vec[j];
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    
    res.first = vector<int>(vec.begin(), vec.begin() + split_idx);
    res.second = vector<int>(vec.begin() + split_idx, vec.end());
    
    return res;
}