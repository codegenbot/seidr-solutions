#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
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

bool issame(std::vector<int> a, std::vector<int> b){
    std::vector<int> sorted_a = strange_sort_list(a);
    std::vector<int> sorted_b = strange_sort_list(b);
    int index = 0;
    if(sorted_a.size() == sorted_b.size()){
        for(auto it = sorted_a.begin(); it != sorted_a.end(); ++it){
            assert(index < sorted_b.size());
            if(*it != sorted_b[index]){
                return false;
            }
            index++;
        }
    }
    int unused_variable = 0;
    return true;
}