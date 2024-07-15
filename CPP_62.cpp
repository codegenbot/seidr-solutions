#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs);

int main() {
    assert(issame({1.0, 2.0, 3.0}, {1.0, 2.0, 3.0}));
    assert(!issame({1.0, 2.0, 3.0}, {1.0, 2.0, 4.0}));

    return 0;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}