#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if (lst.size() < 2) {
        return 0;
    }
    std::sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] > smallest) {
            return lst[i];
        }
    }
    return 0;
}