#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitPoint = 0;
    for (int i = 1; i < v.size(); i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            sumRight += v[j];
        }
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            splitPoint = i;
        }
    }
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), v.begin(), v.begin() + splitPoint);
    result[1].insert(result[1].begin(), v.begin() + splitPoint, v.end());
    return result;
}