#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < v.size(); ++i) {
        if (abs(v[i] - v[0]) <= min_diff) {
            min_diff = abs(v[i] - v[0]);
            cut_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());
    
    return {left, right};
}