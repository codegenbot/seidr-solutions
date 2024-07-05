#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(const vector<int>& lst) {
    vector<int> result;
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int i = 0, j = sorted_lst.size() - 1;
    while (i <= j) {
        result.push_back(sorted_lst[i++]);
        if (i <= j) {
            result.push_back(sorted_lst[j--]);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({4, 2, 5, 3, 1}), {1, 5, 2, 4, 3}));
    assert(issame(strange_sort_list({1, 2, 3, 4, 5, 6}), {1, 6, 2, 5, 3, 4}));
    cout << "All test cases passed!" << endl;
    return 0;
}