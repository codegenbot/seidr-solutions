#include <vector>
#include <cmath>

using namespace std;

bool issame(float a, float b) {
    if (abs(a - b) > 1e-6) {
        return false;
    }
    return true;
}

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 1; i < xs.size(); ++i) {
        result[i-1] = i * xs[i];
    }
    return result;
}