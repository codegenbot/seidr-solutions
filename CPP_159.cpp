#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> first = {1, 2, 3};
    std::vector<int> second = {1, 2, 3};

    if (issame(first, second)) {
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    return 0;
}