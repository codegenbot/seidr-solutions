#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        if (left != right) {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        } else {
            result.push_back(lst[left]);
        }
        left++;
        right--;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({3, 2, 1}), {1, 3, 2}));
    assert(issame(strange_sort_list({9, 3, 8, 2, 7, 1}), {1, 8, 2, 7, 3, 9}));
    assert(issame(strange_sort_list({-10, 0, -5, -20, 100}), {-20, 100, -10, -5, 0}));

    cout << "All test cases pass" << endl;
    return 0;
}