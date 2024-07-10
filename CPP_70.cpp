```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    std::vector<int> input;
    int num;
    std::cout << "Enter numbers (0 to stop): ";
    while ((std::cin >> num) && (num != 0)) {
        input.push_back(num);
    }
    std::cout << "Sorted list: ";
    for (int i : strange_sort_list(input)) {
        std::cout << i << " ";
    }
    return 0;
}