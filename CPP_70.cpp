#include <algorithm>
#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right) {
            result.push_back(lst[right--]);
        }
    }
    return result;
}

#ifndef MAINFUN_CPP_70
#define MAINFUN_CPP_70
int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    
    return 0;
}
#endif