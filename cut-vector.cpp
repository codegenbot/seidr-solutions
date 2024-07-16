#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result = {{}, {}};

    for (int i = 0; i < v.size(); i++) {
        vector<int> left = {v[0], v[1], ..., v[i]};
        vector<int> right = {v[i+1], v[i+2], ..., v.back()};

        int diff = abs(left.back() - right.front());
        if (diff <= min_diff) {
            min_diff = diff;
            result = {{left}, {right}};
        }
    }

    return result;
}