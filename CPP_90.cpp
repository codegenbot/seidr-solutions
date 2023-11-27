#include <vector>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return -1;
    }
    
    std::sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int next_smallest_val = lst[1];
    
    if(smallest == next_smallest_val){
        return -1;
    }
    
    return next_smallest_val;
}