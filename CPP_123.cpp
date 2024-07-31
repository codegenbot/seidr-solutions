#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {3, 2, 1};

    if (issame(a, b)) {
        std::cout << "Vectors contain same elements." << std::endl;
    } else {
        std::cout << "Vectors do not contain same elements." << std::endl;
    }

    return 0;
}