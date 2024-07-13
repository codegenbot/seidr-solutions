```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            std::sort(lst.begin(), lst.end());
    }

    return result;
}

int main() {
    // Example usage:
    std::vector<int> input = {4, 2, 7, 1, 3};
    std::vector<int> output = strange_sort_list(input);
    
    for (int num : output) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}