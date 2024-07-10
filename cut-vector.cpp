#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        if (i == 1) {
            left_sum = accumulate(v.begin(), v.end(), 0);
            right_sum = 0;
        } else if (i == v.size()) {
            left_sum = 0;
            right_sum = accumulate(v.begin() + i - 1, v.end(), 0);
        } else {
            left_sum = accumulate(v.begin(), v.begin() + i - 1, 0);
            right_sum = accumulate(v.begin() + i, v.end(), 0);
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec = v.begin();
    if (cut_index > 1) {
        for (int i = 0; i < cut_index - 1; i++)
            left_vec++;
    }
    
    vector<int> right_vec = left_vec + cut_index;
    return {vector<int>(left_vec, right_vec), {}};
}