#include <iostream>
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
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({1.0, -2.0, 3.0}), {1.0, 3.0}));
    cout << "All tests passed.\n";
    return 0;
}