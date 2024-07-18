#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> arr);

bool issame(vector<int> a, vector<int> b) {
    return sort_array(a) == sort_array(b);
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame({2, 4, 8, 16, 32}, {2, 4, 8, 16, 32}));
    return 0;
}