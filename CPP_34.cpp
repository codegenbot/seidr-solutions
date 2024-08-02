#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {3, 2, 1};

    bool result = issame(a, b);
    if (result) {
        std::cout << "Vectors are the same after sorting." << std::endl;
    } else {
        std::cout << "Vectors are different after sorting." << std::endl;
    }

    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}