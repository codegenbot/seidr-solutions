#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(get_positive({}) == {});
    return 0;
}