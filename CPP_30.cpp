#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return abs(a - b) < 0.0001;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0 || (num == 0 && !issame(num, -0))) {
            result.push_back(num);
        }
    }
    return result;
}