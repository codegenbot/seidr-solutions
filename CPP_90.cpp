#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; // Using -1 to represent None

    std::sort(lst.begin(), lst.end());
    int first_smallest = lst[0];

    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > first_smallest) {
            return lst[i];
        }
    }

    return -1; // No 2nd smallest element found
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    std::cout << "Test passed!\n";
    return 0;
}