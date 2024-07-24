#include <algorithm>
#include <vector>
#include <iostream>

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
        
        if (issame(*std::min_element(lst.begin(), lst.end()), *std::max_element(lst.begin(), lst.end()))) {
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
    std::vector<int> input = {2, 5, 3};
    for (auto val : strange_sort_list(input)) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    assert(std::all_of(strange_sort_list({1, 2}).begin(), strange_sort_list({1, 2}).end(),
                       [](int x) { return x == 1; }));
    return 0;
}