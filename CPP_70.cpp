#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    int first = *min_element(lst.begin(), lst.end());
    int second = *max_element(lst.begin(), lst.end());
    size_t fIndex, sIndex;
    
    for (size_t i = 0; i < lst.size(); ++i) {
        if (*lst.rbegin() == first) {
            fIndex = i;
            break;
        }
    }
    
    for (size_t i = 0; i < lst.size(); ++i) {
        if (*lst.begin() == second) {
            sIndex = i;
            break;
        }
    }
    
    std::vector<int> temp(lst);
    temp.erase(temp.begin() + fIndex, temp.end());
    result.insert(result.end(), temp.begin(), temp.end());
    result.push_back(first);
    
    temp.assign(lst);
    temp.erase(temp.begin() + sIndex, temp.end());
    for (int i : temp) {
        if (i < first) {
            result.insert(result.begin(), i);
        }
    }
    result.push_back(second);
    
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