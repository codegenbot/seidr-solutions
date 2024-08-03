#include <iostream>
#include <vector>
#include <algorithm>

#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int start = 0, end = lst.size() - 1;
    while (start <= end) {
        result.push_back(lst[start++]);
        if (start <= end) {
            result.push_back(lst[end--]);
        }
    }
    return result;
}