#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert (issame(vector<int>({1, 2, 3, 5}), vector<int>({-1, 2, 3, 4})));
    return 0;
}