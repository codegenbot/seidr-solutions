#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<float> derivative(const vector<float>& xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * pow(xs[0], i));
    }
    return result;
}

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> ys = derivative(xs);
    for (auto x : ys) {
        cout << x << " ";
    }
    return 0;
}