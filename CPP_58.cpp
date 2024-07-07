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
    int n, m;
    std::cout << "Enter the number of elements in list 1: ";
    std::cin >> n;
    std::vector<int> l1(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> l1[i];
    }

    std::cout << "Enter the number of elements in list 2: ";
    std::cin >> m;
    std::vector<int> l2(m);
    for(int i = 0; i < m; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> l2[i];
    }

    if(same(l1, l2)) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::cout << "The lists are not the same." << std::endl;
    }

    std::vector<int> intersection = common(l1, l2);
    if(intersection.size() != 0) {
        for(int i : intersection) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No common elements." << std::endl;
    }

    return 0;
}