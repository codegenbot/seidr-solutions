bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

#include <assert.h>
#include <vector>

int main() {
    assert(issame(incr_list({1, 2, 3}), {2, 3, 4}));
    return 0;
}