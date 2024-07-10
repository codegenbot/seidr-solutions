#include <iostream>
#include <vector>
#include <set>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::set<int> seen;
    std::vector<int> result;
    for (int x : v) {
        if (seen.insert(x).second) { // new element, add to result
            result.push_back(x);
        }
    }
    return result;
}

int mainFunction() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> v;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "Duplicates removed: ";
    for (int i = 0; i < remove_duplicates(v).size(); i++) {
        std::cout << remove_duplicates(v)[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}