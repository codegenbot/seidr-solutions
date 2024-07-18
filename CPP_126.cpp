#include <algorithm>
#include <cassert>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    return lst == sorted_lst;
}