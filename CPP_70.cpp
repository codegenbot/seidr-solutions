```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        
        // Remove all occurrences of min_val from the list.
        for (auto it = lst.begin(); it != lst.end(); ) {
            if (*it == min_val) {
                it = lst.erase(it);
            } else {
                ++it;
            }
        }

        // If the list is not empty, do the same for max_val.
        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);

            for (auto it = lst.begin(); it != lst.end(); ) {
                if (*it == max_val) {
                    it = lst.erase(it);
                } else {
                    ++it;
                }
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> input;
    for (int i = 0; i < 6; ++i) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }

    std::vector<int> output = strange_sort_list(input);

    if (issame(output, {1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}