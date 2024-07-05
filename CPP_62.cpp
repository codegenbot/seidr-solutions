#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// Define the derivative function
vector<float> derivative(const vector<float>& xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

// Define the issame function
bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({1, 2, 3}), {2, 6}));
    assert(issame(derivative({5, -3, 4}), {-3, 8}));
    cout << "All tests passed!" << endl;
    return 0;
}