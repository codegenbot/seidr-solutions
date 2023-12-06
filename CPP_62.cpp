#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> ys;
    ys.reserve(xs.size());
    for (auto x : xs) {
        ys.push_back(derivative({x}));
    }
    for (auto y : ys) {
        cout << y << " ";
    }
    return 0;
}
