#include <algorithm>
#include <initializer_list> // Include this line
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

    // Use a loop to concatenate vectors
    vector<int> result;
    for (int i : left) {
        result.push_back(i);
    }
    for (int i : right) {
        result.push_back(i);
    }

    if (left.size() > 1 && right.size() > 1) {
        cout << "Error: Input vector is not suitable." << endl;
        return {};
    } else {
        return result;
    }
}