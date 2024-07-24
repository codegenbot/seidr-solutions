#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result(b.size());
    for (int i = 0; i < b.size(); ++i) {
        result[i] = (b[i] == num) ? 1 : 0;
    }
    return result;
}