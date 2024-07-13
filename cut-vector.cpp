#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < vec.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        
        for (int j = i; j < vec.size(); ++j) {
            right_sum += vec[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff || (diff == 0 && cut_index != -1)) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    for (int i = 0; i < cut_index; ++i) {
        result[0].push_back(vec[i]);
    }
    
    for (int i = cut_index; i < vec.size(); ++i) {
        result[1].push_back(vec[i]);
    }
    
    return result;
}