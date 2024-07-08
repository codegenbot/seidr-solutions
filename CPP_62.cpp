#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    vector<float> res = derivative({1});
    assert(res.empty());
    return 0;
}