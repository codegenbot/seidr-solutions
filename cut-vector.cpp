#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        if (abs(v[i] - v[i+1]) <= min_diff) {
            min_diff = abs(v[i] - v[i+1]);
            cut_index = i + 1;
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