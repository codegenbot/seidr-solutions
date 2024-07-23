#include <vector>
#include <iostream>

std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (!(a.size() == b.size())) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            throw std::runtime_error("Vectors are not the same");
        }
    }
    return true;
}

int main() {
    try {
        assert(isSame(filter_integers({3, 3, 3}), {3, 3, 3}));
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}