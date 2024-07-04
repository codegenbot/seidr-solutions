#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool take_min = true;
    while (left <= right) {
        if (take_min) {
            result.push_back(lst[left++]);
        } else {
            result.push_back(lst[right--]);
        }
        take_min = !take_min;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({1, 3, 2, 4}), {1, 4, 2, 3}));
    assert(issame(strange_sort_list({5, 4, 3, 2, 1}), {1, 5, 2, 4, 3}));
    cout << "All tests passed!" << endl;
    return 0;
}