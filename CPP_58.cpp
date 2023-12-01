#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using std::vector;

vector<int> common(vector<int>& l1, vector<int>& l2);

vector<int> common(vector<int>& l1, vector<int>& l2) {
    vector<int> result;
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert (common({4, 3, 2, 8}, {}) == vector<int>{});
    assert (common({1, 2, 3}, {1, 2, 3}) == vector<int>{1, 2, 3});
    assert (common({1, 2, 3}, {4, 5, 6}) == vector<int>{});
    assert (common({1, 2, 3}, {3, 4, 5}) == vector<int>{3});
    assert (common({}, {}) == vector<int>{});

    return 0;
}