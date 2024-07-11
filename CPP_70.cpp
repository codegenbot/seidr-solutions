#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> strange_sort_list(const vector<int>& lst){
    vector<int> result;
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int i = 0, j = sorted_lst.size() - 1;
    while (i <= j) {
        result.push_back(sorted_lst[i++]);
        if (i <= j) result.push_back(sorted_lst[j--]);
    }
    return result;
}

int main(){
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}