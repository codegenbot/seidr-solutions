#include <vector>

std::vector<int> generate_integers() {
    std::vector<int> integers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    return integers;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int i = a.front(); i <= b.back(); ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}