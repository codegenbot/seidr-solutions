```cpp
#include <iostream>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> l = {};
    assert(get_positive(l).empty());
    return 0;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}