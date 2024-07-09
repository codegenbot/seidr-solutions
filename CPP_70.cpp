#include <algorithm>
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int minVal = *std::min_element(lst.begin(), lst.end());
        int maxVal = *std::max_element(lst.begin(), lst.end());
        if (minVal == maxVal) {
            result.push_back(minVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        } else {
            result.push_back(minVal);
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }
    return result;
}

int main() {
    std::vector<int> test = {2, 1, 3};
    for (int i : strange_sort_vector(test)) {
        std::cout << i << " ";
    }
    if (!issame({1, 3}, strange_sort_vector({1, 2, 3}))) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}