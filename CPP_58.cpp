#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>
#include <iterator>

using namespace std;

bool is_same_vectors(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(is_same_vectors(common({4, 3, 2, 8}, {}), {}));
    return 0;
}