#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= v.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j)
            left_sum += v[j];
        
        for (int j = i; j < v.size(); ++j)
            right_sum += v[j];
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{vector<int>(v.begin(), v.begin() + cut_index)}, {vector<int>(v.begin() + cut_index, v.end())}};
}