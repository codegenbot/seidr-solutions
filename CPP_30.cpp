#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({1.0, -2.0, 3.5}), {1.0, 3.5}));
    assert(issame(get_positive({-1.0, -2.0, -3.5}), {}));
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({0.0, 4.2, 5.1}), {4.2, 5.1}));
    return 0;
}