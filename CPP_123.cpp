#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    // ... rest of your code ...
}