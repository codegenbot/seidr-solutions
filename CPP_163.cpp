#include <vector>

std::vector<int> generate_integers(int low, int high) {
    std::vector<int> result;
    for (int i = low; i <= high; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int num : a) {
        if (num % 2 == 0 && std::find(b.begin(), b.end(), num) != b.end()) {
            result.push_back(num);
        }
    }
    return result;
}