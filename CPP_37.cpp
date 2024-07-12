#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) { return a == b; }

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> evenVals;
    for (float x : l) if (x % 2 == 0) evenVals.push_back(x);
    std::sort(evenVals.begin(), evenVals.end());
    std::vector<float> result(l.size());
    int idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = evenVals[idx++];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}