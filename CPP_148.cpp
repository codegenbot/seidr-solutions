#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> bf(const string& arg1, const string& arg2) {
    return {arg1, arg2};
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    
    return 0;
}