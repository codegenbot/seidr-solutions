#include <vector>
#include <assert.h>

bool issame(std::vector<float> a, std::set<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(b.count(a[i]) > 0)) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {})); 
}