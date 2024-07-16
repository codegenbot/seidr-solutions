#include <vector>
#include <algorithm>
#include <iterator>

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
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {3, 4, 5, 6, 7};
    vector<int> expectedResult = {3, 4, 5};
    
    vector<int> result = common(l1, l2);
    assert(issame(result, expectedResult));
    
    return 0;
}