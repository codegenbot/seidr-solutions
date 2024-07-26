#include <iostream>
#include <map>
#include <cassert>

using namespace std;

bool issame(map<char, int> a, map<char, int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}