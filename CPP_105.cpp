#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> by_length(vector<int> arr);

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}