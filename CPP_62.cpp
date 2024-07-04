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

int main() {
    // Test cases for the derivative function
    assert(derivative({1}) == vector<float>({}));
    assert(derivative({1, 2}) == vector<float>({2}));
    assert(derivative({1, 2, 3}) == vector<float>({2, 6}));
    cout << "All tests passed!" << endl;
    return 0;
}