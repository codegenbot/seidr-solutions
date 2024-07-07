```cpp
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

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
    l1.push_back(1); l1.push_back(2); l1.push_back(3); l1.push_back(4);

    std::vector<int> l2;
    l2.push_back(3); l2.push_back(4); l2.push_back(5); l2.push_back(6);

    std::set<int> set1(l1.begin(), l1.end());
    std::set<int> set2(l2.begin(), l2.end());

    if(std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::inserter(set2, set2.end())).size()) {
        std::cout << "Not all elements of one list are present in another." << std::endl;
    } else {
        std::cout << "All elements of one list are present in another." << std::endl;
    }

    if(common({1, 2, 3, 8}, {4, 3, 2, 8}).size() != 0) {
        for(int i : common({1, 2, 3, 8}, {4, 3, 2, 8})) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No common elements." << std::endl;
    }

    return 0;
}