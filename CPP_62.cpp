#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs);

int main() {
    // test cases
    vector<float> xs = {1.0, 2.0, 3.0, 4.0};
    vector<float> result = derivative(xs);
    assert(result.size() == xs.size() - 1);
    assert(issame(result, {2.0, 6.0, 12.0}));
    
    xs = {0.5, 1.5, 2.5, 3.5};
    result = derivative(xs);
    assert(result.size() == xs.size() - 1);
    assert(issame(result, {0.5, 2.5, 7.0}));
    
    xs = {-1.0, -2.0, -3.0, -4.0};
    result = derivative(xs);
    assert(result.size() == xs.size() - 1);
    assert(issame(result, {-2.0, -6.0, -12.0}));
    
    return 0;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}