#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}