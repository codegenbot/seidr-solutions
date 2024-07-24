#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    for (int i = 0; i < b.size(); ++i) {
        int count = 0;
        while (b[i] % num == 0) {
            count++;
            b[i] /= num;
        }
        result.push_back(count);
    }
    return result;
}