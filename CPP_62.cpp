#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> derivative_xs;
    for (int i = 1; i < xs.size(); ++i) {
        derivative_xs.push_back(xs[i] * i);
    }
    return derivative_xs;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    assert(issame(derivative({1}), {}));
    return 0;
}