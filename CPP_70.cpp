#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    std::sort(lst.begin(), lst.end());
    result.push_back(*std::min_element(lst.begin(), lst.end()));
    lst.erase(std::remove(lst.begin(), lst.end(), *std::min_element(lst.begin(), lst.end())), lst.end());
    
    if (!lst.empty()) {
        std::sort(lst.begin(), lst.end());
        result.push_back(*std::max_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *std::max_element(lst.begin(), lst.end())), lst.end());
    }
    
    while (!lst.empty()) {
        std::sort(lst.begin(), lst.end());
        result.push_back(*std::min_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *std::min_element(lst.begin(), lst.end())), lst.end());
        
        if (!lst.empty()) {
            std::sort(lst.begin(), lst.end());
            result.push_back(*std::max_element(lst.begin(), lst.end()));
            lst.erase(std::remove(lst.begin(), lst.end(), *std::max_element(lst.begin(), lst.end())), lst.end());
        }
    }
    
    return result;
}