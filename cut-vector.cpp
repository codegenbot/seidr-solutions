#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for(int i = 0; i < n-1; ++i) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j <= i; ++j) 
            left_sum += v[j];
        
        for(int j = i+1; j < n; ++j)
            right_sum += v[j];
        
        int diff = abs(left_sum - right_sum);
        if(diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left = vector<int>(v.begin(), v.begin() + cut_index+1);
    vector<int> right = vector<int>(v.begin() + cut_index, v.end());
    
    return {left, right};
}