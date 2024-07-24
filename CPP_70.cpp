#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (issame(min_val, max_val)) {
            for(int i : lst) {
                if(i == min_val) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
        } else {
            for(int i : lst) {
                if(i == min_val) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
            for(int i : lst) {
                if(i == max_val) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
        }
    }
    return result;
}