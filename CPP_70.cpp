#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int contest_main() {
    assert (issame(strange_sort_list({111111}), {111111}));
    // more test cases here
    assert (issame(strange_sort_list({1, 2, 3, 4, 5}), {1, 5, 2, 4, 3}));
    assert (issame(strange_sort_list({9, 8, 7, 6, 5, 4, 3, 2, 1}), {1, 9, 2, 8, 3, 7, 4, 6, 5}));
    assert (issame(strange_sort_list({5, 5, 5, 5, 5}), {5, 5, 5, 5, 5}));
    assert (issame(strange_sort_list({}), {}));
    return 0;
}