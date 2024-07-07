#include <iostream>
#include <vector>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::vector<int> intersection;
    for (int i : l1) {
        for (int j : l2) {
            if (i == j && std::find(intersection.begin(), intersection.end(), i) == intersection.end()) {
                intersection.push_back(i);
            }
        }
    }
    return intersection;
}

int main() {
    std::vector<int> l1 = {4, 3, 2, 8};
    std::vector<int> l2 = {4, 3, 2, 8};

    if (common(l1, l2).size()) {
        for (int i : common(l1, l2)) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No common elements." << std::endl;
    }

    return 0;
}