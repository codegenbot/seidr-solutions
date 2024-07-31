#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 1; i < xs.size(); i++) {
        result[i - 1] = xs[i] * i;
    }
    return result;
}