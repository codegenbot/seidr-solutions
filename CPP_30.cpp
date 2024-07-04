#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1.0, 1.5, 3.2, -2.4}), {1.5, 3.2}));
    assert(issame(get_positive({2.5, 0.0, -3.3, 4.0}), {2.5, 4.0}));
    assert(issame(get_positive({-1.1, -2.2, -3.3}), {}));
    assert(issame(get_positive({5.5, 6.6}), {5.5, 6.6}));
    return 0;
}