#include <vector>
#include <cassert>

using namespace std;

vector<int> eat(int a, int b, int c) {
    return {b, a - c};
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 3}));
    return 0;
}