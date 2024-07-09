#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> evenVals;
    for (float x : l) {
        if (x % 2 == 0) {
            evenVals.push_back(x);
        }
    }
    std::sort(evenVals.begin(), evenVals.end());
    
    int i = 0, j = 0;
    std::vector<float> result;
    for (float x : l) {
        if (i < evenVals.size()) {
            result.push_back(evenVals[i]);
            i++;
        } else {
            result.push_back(x);
        }
    }
    
    return result;
}