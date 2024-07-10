#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= v.size() / 2; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < i; j++) {
            sum_left += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            sum_right += v[j];
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].reserve(cut_index);
    result[1].reserve(v.size() - cut_index);
    for (int i = 0; i < cut_index; i++) {
        result[0].push_back(v[i]);
    }
    for (int i = cut_index; i < v.size(); i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}