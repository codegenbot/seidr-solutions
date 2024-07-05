#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool is_same(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    assert(is_same(derivative({1}), {}));
    assert(is_same(derivative({0, 1, 2, 3}), {1, 4, 9}));
    assert(is_same(derivative({0, 3, 0, 4, 0}), {3, 0, 12, 0}));

    cout << "All tests passed." << endl;
    return 0;
}