#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    vector<vector<int>> res;
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff == 0 || diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    res.push_back(vector<int>(v.begin(), v.begin() + cut_index));
    res.push_back(vector<int>(v.begin() + cut_index, v.end()));
    return res;
}