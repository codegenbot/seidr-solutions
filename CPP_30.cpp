#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm> // for std::equal

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

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1.0, 2.5, 0, 3.1, -4.2}), {2.5, 3.1}));

    cout << "All tests pass.\n";
    return 0;
}