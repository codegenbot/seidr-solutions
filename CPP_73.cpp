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
    assert(smallest_change({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) == 9);
    assert(smallest_change({1, 2, 3, 4, 5, 5, 4, 3, 2, 1}) == 0);
    return 0;
}