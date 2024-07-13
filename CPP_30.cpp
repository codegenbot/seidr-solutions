#include <vector>

bool issame(float f1, float f2) {
    if (f1 == f2)
        return true;
    else
        return false;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0 || issame(num, 0.0)) {
            result.push_back(num);
        }
    }
    return result;