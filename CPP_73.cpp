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
    assert(smallest_change({2, 4, 6, 8, 10, 9, 7, 5, 3, 1}) == 9);
    // Add more test cases here
    return 0;
}