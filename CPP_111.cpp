#include <iostream>
#include <map>
#include <cassert>
using namespace std;

map<char, int> histogram(string test);
bool issame(map<char, int> a, map<char, int> b);

bool issame(map<char, int> a, map<char, int> b) {
    // implementation here
}

map<char, int> histogram(string test) {
    // implementation here
}

int main() {
    // test cases
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}