#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 1; i < xs.size(); ++i) {
        result[i-1] = (xs[i] - xs[i-1]) / static_cast<float>(i);
    }
    return result;
}