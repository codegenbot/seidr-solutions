#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs);
bool issame(vector<float> a, vector<float> b);

int main() {
    assert(issame(derivative({1}), {}));
}

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-4) {
            return false;
        }
    }
    return true;
}