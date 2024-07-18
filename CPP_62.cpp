#include <vector>
#include <cassert>

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
    return a == b;
}