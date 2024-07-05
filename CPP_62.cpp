#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({0, 1, 2, 3}), {1, 4, 9}));
    cout << "All tests passed!" << endl;
    return 0;
}