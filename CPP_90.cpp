#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.empty()) return -1; 
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    auto it = prev(std::end(sorted_lst), 1);
    if (*it == *std::begin(sorted_lst)) return -1; 
    return *it;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35); 
    return 0;
}