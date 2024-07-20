#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(common({4, 3, 2, 8}, {}) == vector<int>{});
    assert(common({1, 2, 3}, {3, 4, 5}) == vector<int>{3});
    assert(common({1, 2, 3}, {4, 5, 6}) == vector<int>{});
    assert(common({}, {4, 5, 6}) == vector<int>{});
    assert(common({1, 2, 3}, {1, 2, 3}) == vector<int>{1, 2, 3});
    
    return 0;
}