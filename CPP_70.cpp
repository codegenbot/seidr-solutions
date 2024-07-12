#include <iostream>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        std::sort(lst.begin(), lst.end());
        if (lst[0] < lst.back()) {
            result.push_back(lst[0]);
            lst.erase(lst.begin());
        } else {
            result.push_back(lst.back());
            lst.pop_back();
        }
    }
    return result;
}

int main() {
    std::vector<int> expected = {1, 4, 3, 2};
    std::vector<int> actual = strange_sort_list({1, 4, 3, 2});
    std::cout << "Expected: ";
    for (int i : expected) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::cout << "Actual: ";
    for (int i : actual) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    if (actual == expected) {
        std::cout << "Test passed.\n";
    } else {
        std::cout << "Test failed.\n";
    }
    return 0;
}