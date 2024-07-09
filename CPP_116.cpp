```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // Your logic to check if two vectors are same or not.
    return a == b;
}

int main() {
    assert(issame({2,4,8,16,32}, sort_vector({2,4,8,16,32})));
    return 0;
}

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(),
        [](int a, int b) {
            int ones_a = __builtin_popcount(a);
            int ones_b = __builtin_popcount(b);
            if (ones_a == ones_b) return a < b;
            return ones_a < ones_b;
        }
    );
    return result;
}