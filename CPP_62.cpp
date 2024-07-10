#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}