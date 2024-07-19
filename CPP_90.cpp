#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2) {
        return -1;
    }
    
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    
    for(int i = 1; i < sorted_lst.size(); ++i) {
        if(sorted_lst[i] > sorted_lst[0]) {
            return sorted_lst[i];
        }
    }
    
    return -1;
}