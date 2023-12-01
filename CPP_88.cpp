#include <vector>
#include <cassert>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    if (array.empty()) {
        return array;
    }

    int sum = array.front() + array.back();
    if (sum % 2 == 0) {
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }

    return array;
}

int main() {
    assert(issame({23, 21, 14, 11}, sort_array({21, 14, 23, 11})));
    
    return 0;
}