#include <vector>
#include <algorithm>

bool issame(float x, float y) {
    if (x == y)
        return true;
    else
        return false;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size() - 1; i++) {
        if (!issame(result[i], result[i + 1])) 
            break;
        else
            return vector<float>();
    }
    return result;
}