#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3};
    auto max_it = std::max_element(v.begin(), v.end());
    std::cout << *max_it << '\n';
    return 0;
}