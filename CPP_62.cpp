#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); i++) {
        if (i + 1 == 0) {
            result[i] = (xs[1] - xs[0]) / abs(i + 1);
        } else {
            result[i] = (xs[i + 1] - xs[i]) / abs(i + 1);
        }
    }
    return result;
}