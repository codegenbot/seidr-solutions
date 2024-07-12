#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[right]);
        if (left != right) {
            result.push_back(lst[left]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    std::vector<int> input = {111111};
    std::vector<int> sorted = strange_sort_list(input);
    assert(issame(sorted, {111111}));
    return 0;
}