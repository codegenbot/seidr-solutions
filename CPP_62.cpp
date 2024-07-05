#include <vector>
#include <cassert>
#include <cmath>
using namespace std;

vector<float> derivative(const vector<float> &xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert((derivative({1}) == vector<float>{}));
    assert((derivative({1, 2}) == vector<float>{2}));
    assert((derivative({1, 2, 3}) == vector<float>{2, 6}));
    return 0;
}