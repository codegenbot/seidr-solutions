#include <iostream>
#include <unordered_set>
#include <cassert>

using namespace std;

bool issame(unordered_set<int> a, unordered_set<int> b){
    return unordered_set<int>(a.begin(), a.end()) == unordered_set<int>(b.begin(), b.end());
}

int main(){
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    return 0;
}