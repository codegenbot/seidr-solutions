#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = -1;
    
    for (int i = 0; i < v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++)
            left_sum += v[j];
        for (int j = i + 1; j < v.size(); j++)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            return {{v[0], v.begin() + 1, v.end()}}, {v.begin(), v.end() - 1};
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    return {{v[0], v.begin() + 1, v.end()}}, {v.begin(), v.end() - 1};
}