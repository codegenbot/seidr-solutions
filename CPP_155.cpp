#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result(b.size(), 0);
    for(int i = 0; i < b.size(); i++) {
        result[i] = std::count(b.begin(), b.end(), b[i]) - 1;
    }
    return result;
}