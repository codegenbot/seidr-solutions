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
        auto newEnd = std::remove(lst.begin(), lst.end(), min_val);
        lst.erase(newEnd, lst.end());

        if (!lst.empty()) {
            bool foundMax = false;
            int max_val = INT_MIN;
            for (int i : lst) {
                if (i > max_val) {
                    max_val = i;
                    foundMax = true;
                }
            }

            if (foundMax) {
                result.push_back(max_val);
                auto newEnd2 = std::remove(lst.begin(), lst.end(), max_val);
                lst.erase(newEnd2, lst.end());
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