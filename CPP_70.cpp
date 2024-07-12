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
    std::vector<int> expected = {111};
    std::vector<int> actual = strange_sort_list({111});
    if (actual != expected) {
        std::cout << "Test failed: ";
        for (int i : actual) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Test passed.\n";
    }
    return 0;
}