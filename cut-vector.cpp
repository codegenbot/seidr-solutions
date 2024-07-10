#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for(int i = 1; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        
        for(int j = i; j < n; j++) {
            right_sum += vec[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if(diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(cut_index);
    result[1].resize(n - cut_index);
    
    for(int i = 0; i < cut_index; i++) {
        result[0][i] = vec[i];
    }
    
    for(int i = 0; i < n - cut_index; i++) {
        result[1][i] = vec[i + cut_index];
    }
    
    return result;
}