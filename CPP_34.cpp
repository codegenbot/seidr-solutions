#include <iostream>
#include <unordered_set>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(unordered_set<int> a, unordered_set<int> b){
    return a == b;
}

int main(){
    assert(issame(unordered_set<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), unordered_set<int>({0, 2, 3, 5, 9, 123})));
    return 0;
}