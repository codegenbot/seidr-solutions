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

bool issame(const vector<float> &a, const vector<float> &b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1, 1, 3, -2, 0}), {1, 3}));
    cout << "All tests passed!" << endl;
    return 0;
}