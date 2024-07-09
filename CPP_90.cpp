#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2) {
        return -1;
    }
    
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > smallest) {
            return lst[i];
        }
    }
    
    return -1;
}

int main() {
    vector<int> lst = {5, 3, 8, 2, 9, 1};
    
    std::cout << next_smallest(lst) << std::endl;
    
    return 0;
}