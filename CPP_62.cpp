#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs);
bool is_same(vector<float> a, vector<float> b);

int main() {
    assert(is_same(derivative({1}), {}));
}

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool is_same(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}
