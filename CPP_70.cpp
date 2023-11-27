#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> strange_sort_list(std::vector<int> lst);

bool is_same(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    bool isLeft = true;
    while(left <= right) {
        if(isLeft) {
            result.push_back(lst[left]);
            left++;
        } else {
            result.push_back(lst[right]);
            right--;
        }
        isLeft = !isLeft;
    }
    return result;
}

int main() {
    assert(is_same(strange_sort_list({111111}), {111111}));
    return 0;
}