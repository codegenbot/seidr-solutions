#include <vector>

bool isSame(vector<float> a, vector<float> b) {
    return (a == b);
}

int main() {
    assert(isSame(get_positive({}), {}));
}