#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < xs.size() - 1; i++) {
        result[i] = xs[i+1] - xs[i];
    }
    return result;
}