```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    sort(lst.begin(), lst.end());
    int min_val = *min_element(lst.begin(), lst.end());
    lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
    
    if (!lst.empty()) {
        sort(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
    }
    
    while (!lst.empty()) {
        sort(lst.begin(), lst.end());
        min_val = *min_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            sort(lst.begin(), lst.end());
            max_val = *max_element(lst.begin(), lst.end());
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    
    result.push_back(min_val);
    while (!lst.empty()) {
        min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
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
    return 0;
}