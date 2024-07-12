#include <vector>
std::vector<int> countParity(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (const char c : numStr) {
        if (c % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}