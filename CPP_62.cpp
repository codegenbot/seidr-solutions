#include <vector>
#include <cassert>

using namespace std;

float derivative(const vector<float>& v) {
    if (v.size() <= 1) {
        return 0.0f;
    }

    return v[1] - v[0];
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return derivative(a) == derivative(b);
}

int main() {
    assert(issame({1.0f}, {0.0f}));

    return 0;
}