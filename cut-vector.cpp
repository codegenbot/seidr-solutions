#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    pair<int, int> pos;
    
    for (int i = 0; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j < i; ++j)
            sum1 += v[j];
        
        for (int j = i; j < n; ++j)
            sum2 += v[j];
        
        int diff = abs(sum1 - sum2);
        
        if (diff < min_diff) {
            min_diff = diff;
            pos = {i, 0};
        } else if (diff == min_diff && sum1 != sum2) {
            pos = {i, 0};
        }
    }
    
    return {{v.begin(), v.begin() + pos.first}, {v.begin() + pos.first, v.end()}};
}