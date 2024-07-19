#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst);

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        if (issame(lst[left], lst[right])) {
            result.push_back(lst[left]);
            break;
        }
        result.push_back(lst[left]);
        result.push_back(lst[right]);
        left++;
        right--;
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111})[0], 111111));
    return 0;
}