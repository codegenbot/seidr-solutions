#include<vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> result(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}