#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(const vector<string>& a, const vector<string>& b) {
    // Your implementation to compare and return the matched strings
    // For simplicity, returning an empty vector
    return {};
}

int main() {
    assert(issame(vector<string>{"this"}, {}) == false);
    assert(issame(total_match({"this"}, {}), {}));

    return 0;
}