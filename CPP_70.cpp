#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a > b)
        return false;
    else if (b > a)
        return true;
    else
        return true; // For equality or the same value
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    while (!lst.empty()) {
        int min = *std::min_element(lst.begin(), lst.end());
        int max = *std::max_element(lst.begin(), lst.end());
        
        if (issame(min, max)) {
            result.insert(result.begin(), min);
            lst.clear();
        } else {
            result.push_back(min);
            lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
            
            result.push_back(max);
            lst.erase(std::remove(lst.begin(), lst.end(), max), lst.end());
        }
    }
    
    return result;
}

int main() {
    std::vector<int> lst = {2, 6, 4, 7, 1};
    for (auto i : strange_sort_list(lst)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}