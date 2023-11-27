#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) {
        return -1; // or any other suitable value to indicate failure
    }
    
    std::sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int second_smallest = lst[1];
    
    if (smallest == second_smallest) {
        return -1; // or any other suitable value to indicate failure
    }
    
    return second_smallest;
}

int main() {
    std::vector<int> lst = {10, 2, 5, 7, 5};
    int result = next_smallest(lst);
    
    // Print the result or use it for further processing
    return 0;
}