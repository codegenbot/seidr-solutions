#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); i++) {
        if (i == 0) {
            result[i] = abs((xs[1] - xs[0]));
        } else {
            result[i] = abs(xs[i + 1] - xs[i]);
        }
    }
    return result;
}