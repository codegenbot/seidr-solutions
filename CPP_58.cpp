```
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

    if(same(l1, l2)) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::cout << "The lists are not the same." << std::endl;
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