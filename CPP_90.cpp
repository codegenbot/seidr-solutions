
#include <iostream>
#include <algorithm>

int next_smallest(std::vector<int>& lst) {
    return *std::min_element(lst.begin() + 1, lst.end());
}

int main() {
    std::vector<int> lst = {-35, 34, 12, -45};
    assert (next_smallest(lst) == -35);
    return 0;
}