#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    for (int i = 0; i < sorted_lst.size() - 1; i++) {
        if (sorted_lst[i] != sorted_lst[i + 1]) {
            return *std::next(std::find(lst.begin(), lst.end(), sorted_lst[0]), std::find(lst.end(), lst.begin(), sorted_lst.back())) == sorted_lst.begin() ? sorted_lst[i + 1] : -1;
        }
    }
    return -1; 
}