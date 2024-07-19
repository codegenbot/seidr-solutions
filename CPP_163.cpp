#include <vector>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> integers;
    for (int i = start; i <= end; ++i) {
        integers.push_back(i);
    }
    return integers;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (const auto& num : a) {
        if (num % 2 == 0) {
            result.push_back(num);
        }
    }
    for (const auto& num : b) {
        if (num % 2 == 0) {
            result.push_back(num);
        }
    }
    return result;
}