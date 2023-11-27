#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return INT_MIN;
    }
    
    sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int second_smallest = lst[1];
    
    assert(smallest != second_smallest);
    
    return second_smallest;
}