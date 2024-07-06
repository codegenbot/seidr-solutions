#include <iostream>
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    if (lst.empty()) return std::vector<int>();

    while (!lst.empty()) {
        int minVal = *std::min_element(lst.begin(), lst.end());
        int maxVal = *std::max_element(lst.begin(), lst.end());
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
    }

    return lst;
}

int main() {
    std::vector<int> test = {111111};
    if (issame(test, strange_sort_vector(test))) 
        std::cout << "Test passed." << std::endl;
    else 
        std::cout << "Test failed." << std::endl;
    
    return 0;
}