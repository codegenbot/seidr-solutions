#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool flag = true;
    while (left <= right) {
        if (flag)
            result.push_back(lst[left++]);
        else
            result.push_back(lst[right--]);
        flag = !flag;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({3, 1, 2}), {1, 3, 2}));
    assert(issame(strange_sort_list({5, 9, 1, 0, 3}), {0, 9, 1, 5, 3}));
    cout << "All tests passed!" << endl;
    return 0;
}