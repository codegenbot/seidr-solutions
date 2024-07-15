#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

std::vector<int> even_odd_count(int num) {
    std::vector<int> count(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}