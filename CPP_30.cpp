#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}