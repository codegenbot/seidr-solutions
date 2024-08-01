#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int total_chars(vector<string> lst) {
    int total = 0;
    for (string str : lst) {
        total += str.length();
    }
    return total;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame({"this"}, {}));
    return 0;
}