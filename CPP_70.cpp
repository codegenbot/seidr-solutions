#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> strange_sort_list(const std::vector<int>& lst) {
    std::sort(lst.begin(), lst.end());
    std::vector<int> res;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        res.push_back(lst[left]);
        if (left != right) {
            res.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return res;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}