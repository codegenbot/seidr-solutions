#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < n; j++) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2, vector<int>());
    
    for (int i = 0; i < cut_index; i++) {
        result[0].push_back(v[i]);
    }
    for (int i = cut_index; i < n; i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}