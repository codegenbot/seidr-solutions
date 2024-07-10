#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    vector<vector<int>> result(2);

    for (int i = 1; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int j = i; j < n; j++) {
            right_sum += vec[j];
        }

        if (left_sum == right_sum) {
            result[0] = vector<int>(vec.begin(), vec.begin() + i);
            result[1] = vector<int>(vec.begin() + i, vec.end());
            return result;
        } else {
            int diff = abs(left_sum - right_sum);
            if (diff < min_diff) {
                min_diff = diff;
                result[0] = vector<int>(vec.begin(), vec.begin() + i);
                result[1] = vector<int>(vec.begin() + i, vec.end());
            }
        }
    }

    return result;
}