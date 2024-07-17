#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    return {{v.begin(), v.begin() + pos}, {v.begin() + pos, v.end()}};
}