#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(const std::vector<int>& lst) {
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    std::vector<int> result;
    int i = 0, j = sorted_lst.size() - 1;
    while (i <= j) {
        result.push_back(sorted_lst[i++]);
        if (i <= j) {
            result.push_back(sorted_lst[j--]);
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}