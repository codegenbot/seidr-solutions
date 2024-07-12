#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (!std::binary_search(result.begin(), result.end(), i)) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<std::vector<int>>& a, std::vector<std::vector<int>>& b) {
    return a == b;
}

int main_test() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> test1(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::vector<int> test2 = remove_duplicates(test1);
    if (issame({test1}, {test2})) {
        for (int i : test2) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}