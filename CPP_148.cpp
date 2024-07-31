#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> bf(string a, string b) {
    vector<string> result;
    result.push_back(a);
    result.push_back(b);
    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), vector<string>()));
    return 0;
}