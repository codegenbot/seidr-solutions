```cpp
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int>b) {
    std::set<int> set1(a.begin(), a.end());
    std::set<int> set2(b.begin(), b.end());
    return set1 == set2;
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
    std::vector<int> l1 = {1, 2, 3, 4};
    std::vector<int> l2 = {3, 4, 5, 6};

    std::set<int> set1(l1.begin(), l1.end());
    std::set<int> set2(l2.begin(), l2.end());

    if(std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::inserter(set2, set2.end())).size()) {
        std::cout << "Not all elements of one list are present in another." << std::endl;
    } else {
        std::cout << "All elements of one list are present in another." << std::endl;
    }

    if(issame(l1, l2)) {
        std::cout << "The two lists are the same." << std::endl;
    } else {
        std::cout << "The two lists are different." << std::endl;
    }

    std::vector<int> result = common(l1, l2);
    for(int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}