#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    while (!lst.empty()) {
        int min = *std::min_element(lst.begin(), lst.end());
        int max = *std::max_element(lst.begin(), lst.end());
        
        if (*std::min_element(lst.begin(), lst.end()) == *std::max_element(lst.begin(), lst.end())) {
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
    std::vector<int> input = {2, 1, 3};
    std::vector<int> output = strange_sort_list(input);
    
    if (issame(*std::min_element(output.begin(), output.end()), *std::max_element(output.begin(), output.end()))) {
        assert(std::all_of(output.begin(), output.end(), [i = *output.begin()](int x) { return issame(i, x); }));
    }
    
    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}