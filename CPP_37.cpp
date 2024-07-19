#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6f) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    vector<float> evenVals;
    for (float x : l) {
        if (abs(x) % 2 == 0) evenVals.push_back(x);
        else result.push_back(x);
    }
    sort(evenVals.begin(), evenVals.end());
    int idx = 0;
    for (float x : l) {
        if (abs(x) % 2 == 0) result[idx++] = evenVals[0];
        else result[idx++] = x;
    }
    return result;
}