#include <vector>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] % 2 == 0 && b[i] % 2 == 0) {
            result.push_back(a[i]);
        }
    }
    return result;
}