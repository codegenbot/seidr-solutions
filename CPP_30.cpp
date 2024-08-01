#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

bool get_positive(vector<float> l) {
    for (float i : l) {
        if (i <= 0) {
            return false;
        }
    }
    return true;
}