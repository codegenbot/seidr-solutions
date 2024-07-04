#include <iostream>
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
    // Example test case
    assert(issame(get_positive({-1.0, 2.5, 3.0, -2.0, 0.0}), {2.5, 3.0}));
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1.0, -2.0}), {}));
    assert(issame(get_positive({1.0, 2.0, 3.0}), {1.0, 2.0, 3.0}));
    cout << "All tests passed!" << endl;
    return 0;
}