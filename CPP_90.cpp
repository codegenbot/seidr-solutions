#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>

int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return std::numeric_limits<int>::min();
    }
    
    std::sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int second_smallest = lst[1];
    
    if(smallest == second_smallest){
        return std::numeric_limits<int>::min();
    }
    
    return second_smallest;
}

int main() {
    assert (next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}