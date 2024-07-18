#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i] != prev) {
            count++;
            if (count == 2) {
                return lst[i];
            }
            prev = lst[i];
        }
    }
    
    return -1;
}