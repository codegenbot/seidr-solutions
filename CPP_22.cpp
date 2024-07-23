#include <vector>
#include <iostream>

std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        } else {
            std::cerr << "Error: Input contains non-positive integers.\n";
            return result;
        }
    }
    return result;
}

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(isSame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}