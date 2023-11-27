#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
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

int main() {
    std::vector<int> input1 = {1, 2, 3};
    std::vector<int> input2 = {1, 2, 3};

    if (issame(input1, input2)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Not same" << std::endl;
    }

    return 0;
}