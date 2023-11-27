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
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    bool result = issame(a, b);

    std::cout << result << std::endl;

    return 0;
}