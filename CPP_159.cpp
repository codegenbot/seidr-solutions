#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    return {eaten, max(0, total - remaining)};
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int solve() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}

int main() {
    return solve();
}