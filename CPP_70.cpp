#include <vector>
#include <algorithm>
#include <cassert>

bool custom_equal(const std::vector<int>& a, const std::vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> strange_sort_list(std::vector<int> lst){
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
    assert(custom_equal(strange_sort_list({111111}) , {111111}));
    return 0;
}