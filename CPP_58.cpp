#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
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
    std::vector<int> l1 = {1, 2, 3, 4};
    std::vector<int> l2 = {3, 4, 5, 6};

    if(std::set_difference(l1.begin(), l1.end(), l2.begin(), l2.end(),
        std::inserter(std::set<int>(), std::back_inserter(std::set<int>()))) -> size()) {
        std::cout << "Not all elements of one list are present in another." << std::endl;
    } else {
        std::cout << "All elements of one list are present in another." << std::endl;
    }

    if(common({4, 3, 2, 8}, {}).size() != 0) {
        for(int i : common({4, 3, 2, 8}, {})) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No common elements." << std::endl;
    }

    return 0;
}