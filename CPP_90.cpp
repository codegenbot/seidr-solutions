#include <vector>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) {
        return -1;
    }
    
    std::sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int second_smallest = lst[1];
    
    if (smallest == second_smallest) {
        return -1;
    }
    
    return second_smallest;
}

int main() {
    std::vector<int> lst = {5, 3, 9, 2, 5};
    int result = next_smallest(lst);
    // use the result as needed
    return 0;
}