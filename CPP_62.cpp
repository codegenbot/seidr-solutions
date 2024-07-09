#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); i++) {
        if (i == 0) {
            result[i] = xs[1];
        } else {
            result[i] = xs[i + 1] * (i + 1);
        }
    }
    return result;
}