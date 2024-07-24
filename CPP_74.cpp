#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}