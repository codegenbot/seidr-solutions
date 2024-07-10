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
        for (int j = 0; j < i; j++) { 
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