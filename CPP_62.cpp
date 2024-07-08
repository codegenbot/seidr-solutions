#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > 1e-4)
            return false;
    }
    
    return true;
}

vector<float> derivative(vector<float> input) {
    // Implementation of derivative function goes here
}

int main() {
    assert(issame(derivative({1}), {}));
    
    return 0;
}