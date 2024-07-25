#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    int minVal = *min_element(lst.begin(), lst.end());
    int maxVal = *max_element(lst.begin(), lst.end());
    
    while (!lst.empty()) {
        while (*std::find(lst.begin(), lst.end(), minVal) != std::numeric_limits<int>::min()) {
            result.push_back(minVal);
            auto it = std::find(lst.begin(), lst.end(), minVal);
            lst.erase(it);
        }
        
        while (!lst.empty() && *std::find(lst.begin(), lst.end(), maxVal) != std::numeric_limits<int>::max()) {
            result.push_back(maxVal);
            auto it = std::find(lst.begin(), lst.end(), maxVal);
            lst.erase(it);
        }
        
        if (!lst.empty()) {
            minVal = *min_element(lst.begin(), lst.end());
            maxVal = *max_element(lst.begin(), lst.end());
        } else {
            break;
        }
    }
    
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