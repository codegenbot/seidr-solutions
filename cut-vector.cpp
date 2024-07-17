#include <climits>
#include <vector>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    
    for(int i = 1; i <= v.size(); i++) {
        int left_sum = 0;
        for(int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        
        int right_sum = 0;
        for(int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        
        if(i == v.size()) {
            int diff = abs(v[0] - 0);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i;
            }
        } else {
            int diff = abs(left_sum - right_sum);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i;
            }
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(pos);
    for(int i = 0; i < pos; i++) {
        result[0].push_back(v[i]);
    }
    result[1].resize(v.size() - pos);
    for(int i = pos; i < v.size(); i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}