#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i < v.size(); i++) {
        if (abs(v[i] - v[0]) <= min_diff) {
            min_diff = abs(v[i] - v[0]);
            cut_index = i;
        }
    }
    vector<int> left = {v[0]};
    for (int i = 1; i < cut_index; i++) {
        left.push_back(v[i]);
    }
    vector<int> right = {v[cut_index]};
    for (int i = cut_index + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    return {left, right};
}