#include <vector>
#include <assert.h>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
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

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}