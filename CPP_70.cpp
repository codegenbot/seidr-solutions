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

void assertEquals(const std::vector<int>& expected, const std::vector<int>& actual) {
    if (expected != actual) {
        std::cout << "Test failed. Expected: ";
        for (int x : expected) {
            std::cout << x << " ";
        }
        std::cout << ". Actual: ";
        for (int x : actual) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test passed." << std::endl;
    }
}

int main() {
    std::vector<int> expected = {111};
    std::vector<int> actual = strange_sort_list({111});
    assertEquals(expected, actual);
    return 0;
}