#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        
        for (int j = i; j < n; ++j) {
            right_sum += vec[j];
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec(vec.begin(), vec.begin() + cut_index);
    vector<int> right_vec(vec.begin() + cut_index, vec.end());
    
    return {left_vec, right_vec};
}