#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool std::vector<int>::operator==(std::vector<int> b) {
    return *this == b;
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

std::vector<int>::operator==(std::vector<int> b) {
    return *this == b;
}