#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> unique_elements(vector<int>& l) {
    sort(l.begin(), l.end());
    auto last = unique(l.begin(), l.end());
    l.erase(last, l.end());
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> test = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    assert(issame(unique_elements(test), vector<int>{0, 2, 3, 5, 9, 123}));
    cout << "Assertion passed." << endl;
    return 0;
}