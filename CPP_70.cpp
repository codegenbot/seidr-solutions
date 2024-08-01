#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> strange_sort_list(std::vector<int>& lst) {
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i++]);
        if (i <= j) {
            result.push_back(lst[j--]);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}