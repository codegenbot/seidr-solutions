```cpp
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int index = -1;
    for (int i = 0; i < vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int j = i + 1; j < vec.size(); j++) {
            right_sum += vec[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    vector<int> left_vec(vec.begin(), vec.begin() + index);
    vector<int> right_vec(vec.begin() + index, vec.end());
    return {left_vec, right_vec};
}