#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    int min_value = *min_element(lst.begin(), lst.end());
    int max_value = *max_element(lst.begin(), lst.end());
    
    while (!lst.empty()) {
        auto it = lst.begin();
        while (*it != min_value) {
            ++it;
        }
        lst.erase(it);
        
        it = lst.begin();
        while (*it != max_value) {
            ++it;
        }
        lst.erase(it);
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