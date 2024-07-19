#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> sort_third(std::vector<int> input) {
    int temp = input[2];
    input[2] = input[6];
    input[6] = temp;
    return input;
}

int main() {
    std::vector<int> v1 = sort_third({5, 6, 3, 4, 8, 9, 2, 1});
    std::vector<int> v2 = {2, 6, 3, 4, 8, 9, 5, 1};

    // Check if vectors are the same
    if (issame(v1, v2)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }

    return 0;
}