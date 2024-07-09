#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1;
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; ++i) {
        if (sorted[i] != sorted[i+1]) {
            return sorted[i+1];
        }
    }
    return -1;
}

int main() {
    std::vector<int> lst = { -35, 34, 12, -45 };
    std::cout << "The smallest number greater than all of them is: " << next_smallest(lst) << std::endl;
    return 0;
}