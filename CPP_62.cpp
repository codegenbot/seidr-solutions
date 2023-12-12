#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the derivative of a vector of floats
vector<float> derivative(const vector<float>& xs) {
    // Calculate the derivative using the formula: (f(x+h) - f(x-h)) / 2h
    float h = 0.01;
    vector<float> ys;
    for (int i = 1; i < xs.size() - 1; i++) {
        ys.push_back((xs[i+1] - xs[i-1]) / (2*h));
    }
    return ys;
}

int main() {
    vector<float> xs = {3, 1, 2, 4};
    vector<float> ys = derivative(xs);
    for (auto x : ys) {
        cout << x << " ";
    }
    return 0;
}