#include <vector>
#include <algorithm> 
using namespace std; 

vector<float> get_positive(vector<float> v) {
    vector<float> result;
    for (float x : v) {
        if (x > 0)
            result.push_back(x);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int test() {
    assert(issame(get_positive({1.0, 2.0}), get_positive({1.0, 2.0})) == true);
    return 0;
}