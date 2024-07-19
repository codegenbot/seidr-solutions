#include <vector>
#include <cstdlib>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
}