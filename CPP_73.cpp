```cpp
#include <iostream>
#include <vector>
#include <string>

int smallest_change(vector<int> arr) {
    std::string str = "";
    for (int i : arr) {
        str += std::to_string(i);
    }
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            if (str[left] == str[right-1]) {
                std::swap(str[left], str[right]);
                right--;
            } else {
                std::swap(str[left], str[right]);
                left++;
            }
        } else {
            left++;
            right--;
        }
    }
    return changes;
}