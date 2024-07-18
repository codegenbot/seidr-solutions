#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main() {
    vector<int> common({4, 3, 2, 8});

    assert(issame(common, {}));

    return 0;
}