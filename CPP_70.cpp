#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }

    while (!lst.empty()) {
        int min = *std::min_element(lst.begin(), lst.end());
        int max = *std::max_element(lst.begin(), lst.end());

        if (*std::min_element(lst.begin(), lst.end()) == *std::max_element(lst.begin(), lst.end())) {
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
    std::vector<int> list = {1, 2, 3, 4, 5};
    for (auto i : strange_sort_list(list)) {
        assert(i == 1 || issame(i, *std::max_element(list.begin(), list.end())));
        std::cout << i << " ";
    }
    return 0;
}