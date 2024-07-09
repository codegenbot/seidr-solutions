```cpp
#include <iostream>
#include <vector>
#include <string>

int smallest_change(std::vector<int> numbers) {
    int n = numbers.size();
    std::string str = "";
    for (int i : numbers) {
        str += std::to_string(i);
    }
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