#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

int main() {
    vector<int> v1 = {4, 3, 2, 8};
    vector<int> v2 = {1, 2, 3, 4};

    assert(issame(v1, v2));

    cout << "The common elements of the two vectors are: ";
    for (auto i : issame(v1, v2)) {
        cout << i << " ";
    }
    return 0;
}