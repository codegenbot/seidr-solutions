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
    std::vector<int> lst = {5, 3, 8, 2, 9};
    int result = next_smallest(lst);
    std::cout << "Next smallest element after the first element: " << result << std::endl;
    
    return 0;
}