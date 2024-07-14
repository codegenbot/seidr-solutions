#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int split_index = 0;

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] - vec[0] <= min_diff) {
            min_diff = vec[i] - vec[0];
            split_index = i;
        }
    }

    return {{vec.begin(), vec.begin() + split_index}, {vec.begin() + split_index, vec.end()}};
}