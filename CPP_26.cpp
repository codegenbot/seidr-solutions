#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
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

    assert(std::equal(remove_duplicates({1, 2, 3, 2, 4, 3, 5}).begin(), remove_duplicates({1, 2, 3, 2, 4, 3, 5}).end(), {1, 4, 5}.begin()));
    return 0;
}