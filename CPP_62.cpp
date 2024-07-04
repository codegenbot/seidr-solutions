#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<float> derivative(const vector<float>& xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(derivative({1}), vector<float>{}));
    assert(issame(derivative({1, 2, 3}), vector<float>{2, 6}));
    assert(issame(derivative({1, 0, 0, 4}), vector<float>{0, 0, 12}));
    assert(issame(derivative({}), vector<float>{}));
    cout << "All tests passed!" << endl;
    return 0;
}