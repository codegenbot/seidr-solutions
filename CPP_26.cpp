```cpp
#include <iostream>
#include <vector>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result;
    for (int i = 0; i < v.size(); i++) {
        bool found = false;
        for (int j = 0; j < result.size(); j++) {
            if (v[i] == result[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int mainFunction() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int>().swap(std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int x;
        std::cin >> x;
        std::vector<int>::iterator it = std::find(std::begin(std::vector<int>(n)), std::end(std::vector<int>(n)), x);
        if (it != std::end(std::vector<int>(n))) {
            *it = x;
        } else {
            (*std::vector<int>(n)).push_back(x);
        }
    }

    std::cout << "Duplicates removed: ";
    for (int i = 0; i < n; i++) {
        std::cout << (*std::vector<int>(n))[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}