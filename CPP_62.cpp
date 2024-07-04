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

int main() {
    assert(derivative({1}) == vector<float>{});
    cout << "All tests passed!" << endl;
    return 0;
}