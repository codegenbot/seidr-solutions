#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main_test() {
    assert(issame(sort_array({1, 2, 4, 8, 16, 32}), {1, 2, 4, 8, 16, 32}));
    return 0;
}