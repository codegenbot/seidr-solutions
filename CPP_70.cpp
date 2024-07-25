#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

bool strange_sort_list(const vector<int>& list) {
    vector<int> sorted_list = list;
    sort(sorted_list.begin(), sorted_list.end());
    return issame(list, sorted_list);
}

int main() {
    assert(issame(strange_sort_list({5, 3, 7, 1}), {1, 3, 5, 7}));
    return 0;
}