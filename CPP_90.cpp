#include <vector>
#include <cassert>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return INT_MIN;
    }
    
    sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int second_smallest = lst[1];
    
    if (smallest == second_smallest) {
        return INT_MIN;
    }
    
    return second_smallest;
}