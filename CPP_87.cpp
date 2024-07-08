#include <iostream>
#include <vector>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    
    for (int i = 0; i < lst.size(); i++) {
        if (i == x) {
            result.push_back(lst[i]);
        }
    }
    
    return result;
}