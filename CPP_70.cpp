```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool areEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);

        auto original_lst_copy = lst; 
        auto it = original_lst_copy.begin();
        while (it != original_lst_copy.end()) {
            if (*it == min_val) {
                lst.erase(it);
                break;
            } else {
                ++it;
            }
        }

        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);

            auto original_lst_copy2 = lst; 
            auto it2 = original_lst_copy2.begin();
            while (it2 != original_lst_copy2.end()) {
                if (*it2 == max_val) {
                    lst.erase(it2);
                    break;
                } else {
                    ++it2;
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

    if (areEqual(output, {1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    assert(areEqual(strange_sort_list({111}), {111}));
    return 0;
}