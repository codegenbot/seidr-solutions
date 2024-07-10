#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); i++) {
        if (i == 0) {
            result[i] = xs[1];
        } else if (i == 1) {
            result[i] = xs[2] * 2.0;
        } else {
            result[i] = xs[i + 2] * (i + 2);
        }
    }
    return result;
}