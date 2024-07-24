#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<int> left(n);
    vector<int> right(n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            left[i] = vec[0];
            right[n - i - 1] = vec[n - 1];
        } else {
            left[i] = vec[i];
            right[n - i - 2] = vec[n - i - 1];
        }
    }

    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (abs(left[i] - right[i]) < minDiff) {
            minDiff = abs(left[i] - right[i]);
            pos = i;
        }
    }

    vector<int> res[2];
    int j = 0;
    for (int i = 0; i <= pos; i++) {
        res[0].push_back(vec[i]);
    }
    while (!res[0].empty() && !res[1].empty()) {
        res[1].push_back(vec[n - 1 - j++]);
    }

    return res[0];
}