#include <iostream>
#include <map>
#include <cassert>
#include <algorithm>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}

bool issame(map<char, int> a, map<char, int> b){
    return a == b;
}