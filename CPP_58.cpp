#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
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
    assert(common({4, 3, 2, 8}, {}).empty());
    assert(common({1, 2, 3, 4}, {3, 4, 5}).size() == 2);
    assert(common({1, 2, 3, 4}, {5, 6, 7}).empty());
    
    return 0;
}