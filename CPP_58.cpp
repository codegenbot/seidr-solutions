```cpp
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> set1(l1.begin(), l1.end());
    std::set<int> set2(l2.begin(), l2.end());
    std::vector<int> intersection;
    intersection.insert(intersection.end(), std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::back_inserter(intersection)));
    return intersection;
}

int main() {
    std::vector<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    std::vector<int> l2;
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(6);

    std::vector<int> result = common(l1, l2);
    for(int i : result) {
        std::cout << i << " ";
    }
    return 0;
}