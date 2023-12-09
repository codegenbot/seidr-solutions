
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * pow(i, i - 1));
    }
    return result;
}

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> result = derivative(xs);
    for (auto x : result) {
        cout << x << " ";
    }
    return 0;
}