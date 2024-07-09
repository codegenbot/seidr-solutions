```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b){
    return a == b;
}

bool operator<(int a, int b) {
    int ones_a = __builtin_popcount(a);
    int ones_b = __builtin_popcount(b);

    if (ones_a == ones_b)
        return a < b;
    else
        return ones_a < ones_b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}