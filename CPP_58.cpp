#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> common(const vector<int>& l1, const vector<int>& l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    vector<int> l1 = {1, 2, 2, 3, 4};
    vector<int> l2 = {2, 2, 3, 3, 4};

    vector<int> expectedResult = {2, 3, 4};
    vector<int> actualResult = common(l1, l2);

    assert(issame(expectedResult, actualResult));
}