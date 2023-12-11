
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

optional<int> next_smallest(vector<int>& lst) {
    // implementation of the function goes here
}

int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert (next_smallest(v) == -35);
    return 0;
}