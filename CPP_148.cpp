#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(vector<string>{"Jupiter", "Makemake"}, {}));
    
    return 0;
}