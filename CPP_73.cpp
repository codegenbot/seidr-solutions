```c++
#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
        }
        left++;
        right--;
    }

    return changes;
}

int main() {
    std::cout << smallest_change(std::vector<int>({0, 1})) << '\n';
    return 0;
}