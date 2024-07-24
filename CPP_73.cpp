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
    // Add more test cases here
    std::vector<int> arr = {0, 2};
    int result = smallest_change(arr);
    std::cout << "smallest change for array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << "is: " << result << std::endl;
    return 0;
}