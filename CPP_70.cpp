#include <cassert>
#include <vector>
#include <algorithm>

bool is_same(std::vector<int> a, std::vector<int> b);

std::vector<int> strange_sort_list(std::vector<int> lst);

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    std::vector<int> sorted_list = strange_sort_list({111111});
    std::vector<int> expected = {111111};
    
    assert(is_same(sorted_list, expected));
    
    return 0;
}