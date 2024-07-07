Here is the modified code:

```cpp
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
#include <initializer_list>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> set1(l1.begin(), l1.end());
    std::set<int> set2(l2.begin(), l2.end());
    std::vector<int> intersection;
    intersection.insert(intersection.end(), std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::back_inserter(intersection)));
    return intersection;
}

int main() {
    std::vector<int> l1 = {1, 2, 3, 4};
    std::vector<int> l2 = {3, 4, 5, 6};
    std::vector<int> result = common(l1, l2);
    for(int i : result) {
        std::cout << i << " ";
    }
    return 0;
}