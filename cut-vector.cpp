#include <climits>
#include <vector>
#include <initializer_list>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < v.size(); i++) {
        left_sum += v[i];
        
        if(i == v.size() - 1) {
            vector<int> left(vector<int>(left_sum));
            vector<int> right({});
            int diff = abs(left[0] - 0);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i + 1;
            }
        } else {
            right_sum += v[i];
            int diff = abs(left_sum - right_sum);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i + 1;
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