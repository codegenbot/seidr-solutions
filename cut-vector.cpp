#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        if (i < v.size()) {
            for (int j = 0; j < i; j++) {
                left_sum += v[j];
            }
            for (int j = i; j < v.size(); j++) {
                right_sum += v[j];
            }
        } else {
            left_sum = accumulate(v.begin(), v.end(), 0);
            right_sum = 0;
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < cut_index; i++) {
        left.push_back(v[i]);
    }
    for (int i = cut_index; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}