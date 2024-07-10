#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    for (int i = 1; i < v.size(); ++i) {
        int diff = abs(v[i-1] - v[i]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + splitIndex), vector<int>(v.begin() + splitIndex, v.end())};