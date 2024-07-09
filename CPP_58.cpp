#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    // Test cases
    assert(issame(vector<int>{4, 3, 2, 8}, vector<int>{}) == false);
    assert(issame(vector<int>{1, 2, 3}, vector<int>{3, 2, 1}) == true);
    assert(issame(vector<int>{5, 6, 7}, vector<int>{8, 9}) == false);

    return 0;
}