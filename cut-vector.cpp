#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs((accumulate(vec.begin(), vec.begin() + i, 0)) - 
                       (accumulate(vec.begin() + i, vec.end(), 0)));
        if (diff < minDiff) {
            minDiff = diff;
            result.first = vector<int>(vec.begin(), vec.begin() + i);
            result.second = vector<int>(vec.begin() + i, vec.end());
        }
    }
    return result;
}