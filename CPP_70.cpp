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

        auto temp_lst = lst; 
        auto it = temp_lst.begin();
        while (it != temp_lst.end()) {
            if (*it == min_val) {
                it = temp_lst.erase(it);
                break;
            } else {
                ++it;
            }
        }

        if (!temp_lst.empty()) {
            int max_val = *std::max_element(temp_lst.begin(), temp_lst.end());
            result.push_back(max_val);

            auto it2 = temp_lst.begin();
            while (it2 != temp_lst.end()) {
                if (*it2 == max_val) {
                    it2 = temp_lst.erase(it2);
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