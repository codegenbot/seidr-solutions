#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}