#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b = {4, 3, 2, 1};

    if (issame(a, b)) {
        std::cout << "The vectors are the same after sorting." << std::endl;
    } else {
        std::cout << "The vectors are different after sorting." << std::endl;
    }

    return 0;
}