```cpp
#include <iostream>
#include <vector>
#include <set>

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::set<int> unique_elements(v.begin(), v.end());
    return std::vector<int>(unique_elements.begin(), unique_elements.end());
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