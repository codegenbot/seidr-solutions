#include <vector>
#include <cassert>
#include <iostream>

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
    assert (issame(derivative({1}), {}));
    assert (issame(derivative({2, 3}), {3}));
    assert (issame(derivative({1, 2, 3}), {2, 6}));
    
    cout << "All tests passed!" << endl;
    return 0;
}