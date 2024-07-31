#include <vector>
#include <string>
#include <cassert>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    std::vector<int> tempVec = std::vector<int>({1, 0});
    assert(issame(even_odd_count(0), tempVec));
    return 0;
}