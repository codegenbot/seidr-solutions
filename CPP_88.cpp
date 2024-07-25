#include <vector>
#include <algorithm>

bool areEqual(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array.back();
    if (sum % 2 == 1) {
        sort(array.begin(), array.end());
    } else {
        sort(array.rbegin(), array.rend());
    }
    return array;
}

int main() {
    assert(areEqual(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
    return 0;
}