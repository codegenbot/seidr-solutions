#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;

    for (int i = 1; i < vec.size(); i++) {
        int diff = abs((int)vec[0] - (int)vec[i]);
        if (diff <= min_diff) {
            min_diff = diff;
            result.first.clear();
            result.second.clear();

            if ((int)vec[0] == (int)vec[i]) {
                result.first.push_back(vec[0]);
                result.second.push_back(vec[i]);
            } else {
                for (int j = 0; j < i; j++) {
                    result.first.push_back(vec[j]);
                }
                for (int j = i; j < vec.size(); j++) {
                    result.second.push_back(vec[j]);
                }
            }
        }
    }

    return result;
}