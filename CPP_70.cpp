#include <iostream>
#include <vector>
#include <algorithm>

bool identical(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        int max_val = *std::max_element(lst.begin(), lst.end());

        result.push_back(min_val);
        auto it = lst.begin();
        bool found_min = false;
        for (; it != lst.end(); ++it) {
            if (*it == min_val) {
                found_min = true;
                break;
            }
        }

        if (found_min) {
            lst.erase(it);
        }

        result.push_back(max_val);

        it = lst.begin();
        bool found_max = false;
        for (; it != lst.end(); ++it) {
            if (*it == max_val) {
                found_max = true;
                break;
            }
        }

        if (found_max) {
            lst.erase(it);
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

    if (identical(output, {1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}