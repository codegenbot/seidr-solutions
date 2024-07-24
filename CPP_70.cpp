#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        
        if (issame(*min_element(lst.begin(), lst.end()), *max_element(lst.begin(), lst.end()))) {
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
    std::vector<int> input = {1, 2, 3};
    std::vector<int> output = strange_sort_list(input);

    for (int i : output) {
        std::cout << i << " ";
    }

    assert(std::is_permutation(output.begin(), output.end(), input.begin(), input.end()));
    
    return 0;
}