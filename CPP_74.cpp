#include <iostream>
#include <vector>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    return total_chars(a) == total_chars(b);
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}