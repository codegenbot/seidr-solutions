#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(cut_index);
    result[1].resize(v.size() - cut_index);
    
    copy(v.begin(), v.begin() + cut_index, result[0].begin());
    copy(v.begin() + cut_index, v.end(), result[1].begin());
    
    return result;
}