#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int split_index = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; j++) {
            sum_left += vec[j];
        }
        for (int k = i + 1; k < vec.size(); k++) {
            sum_right += vec[k];
        }

        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }

    return {vector<int>(vec.begin(), vec.begin() + split_index), vector<int>(vec.begin() + split_index, vec.end())};
}