#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    vector<int> left, right;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            left = vector<int>(vec.begin(), vec.begin() + i + 1);
            right = vector<int>(vec.begin() + i + 1, vec.end());
        }
    }

    return {left, right};
}