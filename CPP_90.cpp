#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; 
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    for(auto it = begin(sorted_lst); prev(it, 1) != end(sorted_lst) && *it == *prev(it, 1); ++it);
    return *it;