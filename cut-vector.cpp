#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    for (int i = 1; i < vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int k = i; k < vec.size(); k++) {
            right_sum += vec[k];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            result = {{}, {}};
            for (int j = 0; j < i; j++) {
                result.first.push_back(vec[j]);
            }
            for (int k = i; k < vec.size(); k++) {
                result.second.push_back(vec[k]);
            }
        }
    }
    return result;
}