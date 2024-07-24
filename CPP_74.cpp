#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> lst1 = {"apple", "banana", "orange"};
    vector<string> lst2 = {"apple", "banana", "orange"};

    assert(issame(lst1, lst2));

    return 0;
}