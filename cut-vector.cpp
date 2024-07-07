#include <algorithm>
#include <initializer_list>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int pos = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());

    vector<int> result;
    for(int i : left) result.push_back(i);
    for(int i : right) result.push_back(i);

    if (pos == 0 || pos == n - 1) {
        cout << "Error: The given vector has less than two elements." << endl;
    } else {
        return {left, right};
    }
}