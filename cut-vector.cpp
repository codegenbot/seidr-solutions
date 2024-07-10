#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int idx = 0;

    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), vec.begin(), vec.begin() + idx);
    result[1].insert(result[1].begin(), vec.begin() + idx, vec.end());
    return result;
}