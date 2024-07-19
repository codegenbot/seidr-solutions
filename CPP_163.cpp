#include <vector>

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int i = a[0]; i <= b[0]; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}