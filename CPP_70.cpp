```
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    
    if (lst.empty()) {
        return result;
    }
    
    sort(lst.begin(), lst.end());
    result.push_back(*min_element(lst.begin(), lst.end()));
    lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    
    while (!lst.empty()) {
        if (lst.size() > 1) {
            sort(lst.begin(), lst.end());
            result.push_back(*max_element(lst.begin(), lst.end()));
            lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
        }
        
        sort(lst.begin(), lst.end());
        while (!lst.empty()) {
            result.push_back(*min_element(lst.begin(), lst.end()));
            lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
            
            if (lst.empty()) {
                break;
            }
        }
    }
    
    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> output = strange_sort_vector(input);
    for (int i : output) {
        std::cout << i << " ";
    }
}