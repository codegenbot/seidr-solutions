#include <vector>
#include <algorithm>
#include <climits>

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2) {
        return INT_MIN;
    }
    
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    int smallest = sorted_lst[0];
    
    for (int i = 1; i < sorted_lst.size(); i++) {
        if (sorted_lst[i] > smallest) {
            return sorted_lst[i];
        }
    }
    
    return INT_MIN;
}