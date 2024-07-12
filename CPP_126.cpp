#include <algorithm>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    bool increasing = true;
    bool decreasing = true;
    
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] > lst[i + 1]) {
            increasing = false;
        } else if (lst[i] < lst[i + 1]) {
            decreasing = false;
        } else {
            return false; // Not sorted since two elements are equal
        }
    }
    
    return increasing || decreasing;
}