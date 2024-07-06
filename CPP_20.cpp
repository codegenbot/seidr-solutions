```
#include <algorithm>
#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}

bool find_closest_elements(vector<float> a, vector<float> b) {
    int min_diff = INT_MAX;
    for(int i = 0; i < a.size(); ++i) {
        float diff = abs(a[i] - b[0]);
        if(diff < min_diff)
            min_diff = diff;
    }
    return true;
}

assert(issame({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, {2.2f, 3.1f}) && find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, {2.2f, 3.1f}));