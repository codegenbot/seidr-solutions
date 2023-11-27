#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return INT_MAX;
    }
    
    std::sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int second_smallest = lst[1];
    
    if(smallest == second_smallest){
        return INT_MAX;
    }
    
    return second_smallest;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);

    return 0;
}