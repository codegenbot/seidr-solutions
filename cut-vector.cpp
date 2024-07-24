#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) return {{}, {v}};
        
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; j++) left_sum += v[j];
        for (int j = i + 1; j < n; j++) right_sum += v[j];
        
        if (left_sum == right_sum) return {{v.begin(), v.begin() + i + 1}, {v.begin() + i + 1, v.end()}};
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + pos + 1);
    vector<int> right(v.begin() + pos + 1, v.end());
    return {left, right};
}