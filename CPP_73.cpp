#include <iostream>
#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::string s = "";
    for (int i : arr) {
        s += std::to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            left++;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    std::vector<int> test1 = {1, 2};
    std::cout << smallest_change(test1) << std::endl; // Output: 1
    std::vector<int> test2 = {3, 4, 5};
    std::cout << smallest_change(test2) << std::endl; // Output: 0
    return 0;
}