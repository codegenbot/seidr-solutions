#include <vector>
#include <string>

bool issameFunc(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    assert(issameFunc(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}