#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == num) {
            result.push_back(i);
        }
    }
    return result;
}