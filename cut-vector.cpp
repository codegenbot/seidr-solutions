#include <climits>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int k = i; k < vec.size(); k++) {
            right_sum += vec[k];
        }
        if (left_sum == right_sum) {
            return {{}, vec};
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left = {vec[0]};
    for (int i = 1; i < cut_index; i++) {
        left.push_back(vec[i]);
    }
    vector<int> right = {};
    for (int i = cut_index; i < vec.size(); i++) {
        right.push_back(vec[i]);
    }
    return {left, right};
}