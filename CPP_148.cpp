#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(pair<string, string> a, pair<string, string> b) {
    return (a.first == b.first && a.second == b.second);
}

int main() {
    assert(issame(make_pair("Jupiter", "Makemake"), make_pair("", "")));
    return 0;
}