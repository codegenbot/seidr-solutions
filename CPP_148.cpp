#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string>& a, vector<string>& b) {
    return a == b;
}

vector<string> bf(const string& s1, const string& s2) {
    return {s1, s2};
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    
    return 0;
}