#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool pickMin = true;
    while (left <= right) {
        if (pickMin) {
            result.push_back(lst[left++]);
        } else {
            result.push_back(lst[right--]);
        }
        pickMin = !pickMin;
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({1, 2, 3, 4, 5}), {1, 5, 2, 4, 3}));
    assert(issame(strange_sort_list({3, 1, 2}), {1, 3, 2}));
    assert(issame(strange_sort_list({}), {}));
    return 0;
}