#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (issame({min_val}, {max_val})) {
            for(int i : lst) {
                if(i == min_val) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
        } else {
            while (!lst.empty()) {
                int val = *min_element(lst.begin(), lst.end());
                for(int i : lst) {
                    if(i == val) {
                        result.push_back(i);
                        lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                        break;
                    }
                }
            }
        }
    }
    return result;
}