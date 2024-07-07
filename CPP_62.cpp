#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 1; i < xs.size(); ++i) {
        result[i-1] = xs[i] * i;
    }
    return result;
}