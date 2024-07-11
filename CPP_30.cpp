#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size();
}

int main() {
    assert(issame(get_positive({}), {}));
}