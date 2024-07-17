#include <climits>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    long long total_sum = accumulate(v.begin(), v.end(), 0LL);
    int min_diff = INT_MAX;
    int split_index = -1;
    
    for(int i = 0; i < v.size(); i++) {
        long long left_sum = accumulate(v.begin(), v.begin() + (i + 1), 0LL);
        long long right_sum = total_sum - left_sum;
        
        int diff = abs(left_sum - right_sum);
        
        if(diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    return {{v.begin(), v.begin() + (split_index + 1)}, {v.begin() + split_index, v.end()}};
}