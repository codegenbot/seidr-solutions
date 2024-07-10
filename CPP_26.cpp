#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result;
    for (int x : v) { 
        bool found = false;
        if (result.empty()) {
            result.push_back(x);
        } else {
            for (int i = 0; i < result.size(); i++) { 
                if (x == result[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back(x);
            }
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

    // sort the vector before removing duplicates
    std::sort(v.begin(), v.end());

    std::cout << "Duplicates removed: ";
    for (int i = 0; i < remove_duplicates(v).size(); i++) {
        std::cout << remove_duplicates(v)[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}