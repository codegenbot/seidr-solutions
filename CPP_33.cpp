#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> sort(std::vector<int> l) {
    std::vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            std::sort(l_copy.begin() + i, l_copy.begin() + i + 3);
        }
    }
    return l_copy;
}

int main() {
    std::vector<int> original{9, 3, 7, 5, 1, 6, 2, 8, 4};
    std::vector<int> sorted = sort(original);

    // Check if the original vector is unchanged
    if (issame(original, {9, 3, 7, 5, 1, 6, 2, 8, 4})) {
        std::cout << "Original vector unchanged\n";
    } else {
        std::cout << "Original vector changed\n";
    }

    // Print the sorted vector
    for (const auto& num : sorted) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}