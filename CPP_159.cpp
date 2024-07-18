#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 4};

    if (issame(a, b)) {
        std::cout << "Vectors are same";
    } else {
        std::cout << "Vectors are different";
    }
    return 0;
}