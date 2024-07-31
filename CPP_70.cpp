
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while(left <= right){
        if(left == right){
            result.push_back(lst[left]);
        } else {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    // Test case
    std::vector<int> a = {111111};
    std::vector<int> b = {111111};
    assert(strange_sort_list(a) == b);
    return 0;
}