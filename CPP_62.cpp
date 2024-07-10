#include <cmath>
#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> res(xs.size() - 1);
    for (int i = 1; i < xs.size(); i++) {
        res[i-1] = (xs[i] - xs[i-1]) / ((i+1)*1.0);
    }
    return res;
}