#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); ++i) {
        result[i] = i * xs[i];
    }
    return result;
}