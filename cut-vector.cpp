#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for(int i = 0; i < v.size(); i++) {
        if(i == 0 || i == v.size() - 1) continue;
        
        int left_sum = 0, right_sum = 0;
        for(int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for(int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        if(diff <= min_diff) {
            min_diff = diff;
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return result;
}