#include <vector> 

int findNextSmallest(const std::vector<int>& lst) {
    if(lst.size() < 2) {
        return INT_MIN;
    }
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    int smallest = sorted_lst[0];
    for(int i = 1; i < sorted_lst.size(); i++) {
        if(sorted_lst[i] > smallest) {
            return sorted_lst[i];
        }
    }
    return INT_MIN;
}