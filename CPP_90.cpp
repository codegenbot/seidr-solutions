#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

int next_smallest(const std::vector<int>& lst){
    if(lst.size() < 2){
        return INT_MIN;
    }
    std::vector<int> sorted_lst = lst;  // Create a copy of the vector
    std::sort(sorted_lst.begin(), sorted_lst.end());
    int smallest = sorted_lst[0];
    for(int i = 1; i < sorted_lst.size(); i++){
        if(sorted_lst[i] > smallest){
            return sorted_lst[i];
        }
    }
    return INT_MIN;
}

int main() {
    assert (next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}