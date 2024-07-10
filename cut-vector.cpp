#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i < v.size(); i++) {
        if (abs(v[i] - v[0]) <= minDiff) {
            minDiff = abs(v[i] - v[0]);
            pos = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + pos), vector<int>(v.begin() + pos, v.end())};