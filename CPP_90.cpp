```cpp
#include <iostream>
#include <algorithm>
#include <vector>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> sorted(lst);
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; // None in C++ is represented as 0 or -1, depending on the context.
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            return sorted[i];
        }
    }
    return -1;
}

int main() {
    std::vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }

    std::cout << next_smallest(lst);

    return 0;
}