#include <vector>
#include <algorithm>

std::vector<int> generate_integers() {
    std::vector<int> result = {1, 2, 3, 4, 5};
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}