#include <vector>
#include <algorithm>
#include <cassert>

using namespace std; 

vector<float> get_positive(vector<float> v) {
    vector<float> result;
    for (float x : v) {
        if (x > 0)
            result.push_back(x);
    }
    return result;
}

bool checkEquality(vector<float> a, vector<float> b) {
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
    vector<float> v1({1.0, -2.0, 3.0});
    vector<float> v2({-1.0, 2.0, -3.0});
    assert(checkEquality(get_positive(v1), get_positive(v2)) == false);
    return 0;
}