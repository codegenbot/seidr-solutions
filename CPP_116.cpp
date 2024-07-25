#include <vector>
#include <bitset>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
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

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        vector<int> v1(a);
        vector<int> v2(b);
        if (issame(v1, v2)) {
            return a < b;
        }
        return bitset<64>(a).count() < bitset<64>(b).count();
    });
    return arr;
}