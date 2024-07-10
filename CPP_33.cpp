#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

void sort(std::vector<int>& l) {
    std::vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            std::sort(l_copy.begin() + i, l_copy.begin() + i + 3);
       }
    }
    l = l_copy;
}

int main() {
    std::vector<int> l = {5, 2, 8, 3, 6, 7, 1, 4, 9};
    sort(l);
    for (int num : l) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    if (issame(a, b)) {
        std::cout << "Arrays are the same." << std::endl;
    } else {
        std::cout << "Arrays are not the same." << std::endl;
    }

    return 0;
}