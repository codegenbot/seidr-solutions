#include <iostream>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(i * xs[i]);
    }
    return result;
}

int main() {
    assert(std::issame(derivative({}), {}));
    return 0;
}