#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); i++) {
        result[i] = (i + 1) * xs[i + 1] / pow(i + 1, 2.0);
    }
    return result;
}