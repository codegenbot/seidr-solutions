```cpp
#include <iostream>
#include <set>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

int main() {
    std::vector<int> l1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};

    std::set<int> common_result;

    common_result = std::set<int>(std::set_intersection(l1.begin(), l1.end(), v2.begin(), v2.end(),
        std::inserter(common_result, common_result.begin())));

    for (int i : common_result) {
        std::cout << i << " ";
    }
    return 0;
}