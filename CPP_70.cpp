#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {5, 4, 3, 2, 1};

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same.\n";
    } else {
        std::cout << "Vectors are different.\n";
    }

    return 0;
}