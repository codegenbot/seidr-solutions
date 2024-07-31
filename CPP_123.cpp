#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {3, 2, 1};

    if (issame(vec1, vec2)) {
        std::cout << "The vectors are the same after sorting";
    } else {
        std::cout << "The vectors are different after sorting";
    }

    return 0;
}