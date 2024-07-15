#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}