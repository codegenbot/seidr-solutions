#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> common(const vector<int>& l1, const vector<int>& l2) {
    vector<int> result;
    
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}

int main() {
    // Test cases to verify the common function
    vector<int> test1 = {1, 2, 3, 4, 5};
    vector<int> test2 = {3, 4, 5, 6, 7};
    assert(issame(common(test1, test2), {3, 4, 5}));
    
    vector<int> test3 = {1, 2, 3};
    vector<int> test4 = {4, 5, 6};
    assert(issame(common(test3, test4), {}));
    
    return 0;
}