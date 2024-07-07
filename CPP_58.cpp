```cpp
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
#include <initializer_list>

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
    for(int i : set1){
        if(set2.find(i) != set2.end()){
            intersection.push_back(i);
        }
    }
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

    if(common({4, 3, 2, 8}, {4, 3, 2, 8}).size() != 0) {
        for(int i : common({4, 3, 2, 8}, {4, 3, 2, 8})) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No common elements." << std::endl;
    }

    return 0;
}