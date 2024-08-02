#include <vector>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    using namespace std;
    vector<float> v1 = get_positive({1.2f, -3.4f, 5.6f});
    vector<float> v2 = get_positive({1.2f, 5.6f});
    assert(issame(v1, v2));
}