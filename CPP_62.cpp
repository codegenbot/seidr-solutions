#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    if (xs.size() > 0) {
        result.push_back(0); // Derivative of constant term is zero
    }
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(i * xs[i]);
    }
    return result;
}