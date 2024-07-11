```cpp
#include <initializer_list>
#include <vector>
#include <iostream>
#include <climits>
#include <cassert>

int smallest_change(std::vector<int> arr) {
    int min = INT_MAX;
    for (int i : arr) {
        if (i < min)
            min = i;
    }
    return min;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    std::vector<int> arr;
    std::cout << "Enter the numbers separated by space: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        arr.push_back(val);
    }
    std::cout << "The smallest change is: " << smallest_change(arr) << std::endl;
}