#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[b.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 1) {
        sort(array.begin(), array.end());
    } else {
        sort(array.rbegin(), array.rend());
    }
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}