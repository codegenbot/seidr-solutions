#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

// Computes the derivative of the polynomial with coefficients given in xs.
vector<float> derivative(const vector<float>& xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

// Checks if two vectors are the same.
bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(derivative({1}), vector<float>{}));
    cout << "All tests passed!" << endl;
    return 0;
}