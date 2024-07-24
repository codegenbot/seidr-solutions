#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result(10, 0);
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] < num) {
            ++result[b[i]];
        }
    }
    return result;
}