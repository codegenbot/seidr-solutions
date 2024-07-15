#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

map<char, int> histogram(string test) {
    // Your existing code for the histogram function
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}