#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

// Computes the derivative of a polynomial represented by its coefficients
vector<float> derivative(const vector<float>& xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

// Checks if two vectors are the same
bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    // Test cases for the derivative function
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({1, 2}), {2}));
    assert(issame(derivative({1, 2, 3}), {2, 6}));
    cout << "All tests passed!" << endl;
    return 0;
}