#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2) {
        return -1;
    }
    
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    
    int smallest = sorted_lst[0];
    for(int num : sorted_lst) {
        if(num > smallest) {
            return num;
        }
    }
    
    return -1;
}

int main() {
    std::cout << next_smallest({-35, 34, 12, -45});
    return 0;
}