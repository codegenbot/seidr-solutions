#include <iostream>
#include <vector>
#include <algorithm>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);

        auto it = lst.begin();
        bool found = false;
        for (; it != lst.end(); ++it) {
            if (*it == min_val) {
                found = true;
                break;
            }
        }

        if (found) {
            if (!lst.empty()) {
                lst.erase(it);
            }
        } else {
            break;
        }
    }

    int max_val = *std::max_element(result.begin(), result.end());
    while (!result.empty() && *result.rbegin() == max_val) {
        result.pop_back();
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

    if (same(output, {1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}