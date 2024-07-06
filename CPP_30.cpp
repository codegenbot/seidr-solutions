#include <vector>
#include <iostream>

bool issame(std::vector a, std::vector b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector get_positive(std::vector l, std::vector v = {}) {
    std::vector result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector v = {1, -2, 3};
    std::cout << "Only positive numbers are: ";
    for (float num : get_positive(v)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}