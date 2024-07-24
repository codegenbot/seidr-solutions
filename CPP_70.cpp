#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0 || a % 2 != 0 && b % 2 == 0) {
        return true;
    }
    return false;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }

    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());

        if (issame(min, max)) {
            result.insert(result.begin(), min);
            lst.clear();
        } else {
            result.push_back(min);
            lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());

            result.push_back(max);
            lst.erase(std::remove(lst.begin(), lst.end(), max), lst.end());
        }
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> output = strange_sort_list(input);

    for (auto i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}