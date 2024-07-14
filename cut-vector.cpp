#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    vector<vector<int>> result;
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    result.push_back(vector<int>(vec.begin(), vec.begin() + cut_index));
    result.push_back(vector<int>(vec.begin() + cut_index, vec.end()));
    return result;
}