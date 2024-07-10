#include <vector>
using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(same(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    // ...
}