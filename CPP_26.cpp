#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> input) {
    std::set<int> s(input.begin(), input.end());
    std::vector<int> result(s.begin(), s.end());
    return result;
}

bool issame(std::vector<std::vector<int>>& a, std::vector<std::vector<int>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main_test() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> test1(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::vector<int> test2 = remove_duplicates(test1);
    if (issame({test1}, {std::vector<int>(test2)})) {
        for (int i : test2) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}