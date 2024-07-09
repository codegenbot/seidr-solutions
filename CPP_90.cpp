#include <iostream>
#include <vector>

int next_smallest(const std::vector<int>& lst) {
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
    std::vector<int> lst = {3, 1, 4, 1, 5, 9, 2, 6};
    std::cout << next_smallest(lst) << std::endl;
    
    return 0;
}