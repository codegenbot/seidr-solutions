#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-5)
            return false;
    }
    return true;
}

int get_positive(vector<float>& v) {
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] > 0)
            return i;
    }
    return -1;
}

int main() {
    vector<float> v = {1.2f, 3.4f};
    assert(issame({}, {}));
    return 0;
}