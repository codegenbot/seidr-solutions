#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> sorted_l = l;
    std::vector<int> third_elements;
    
    for (int i = 2; i < l.size(); i += 3) {
        third_elements.push_back(l[i]);
    }
    
    std::sort(third_elements.begin(), third_elements.end());
    
    int index = 0;
    for (int i = 2; i < l.size(); i += 3) {
        sorted_l[i] = third_elements[index];
        index++;
    }
    
    return sorted_l;
}

assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));