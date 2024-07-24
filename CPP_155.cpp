#include <vector>
#include <string>
#include <cmath>
#include <cassert>

std::vector<int> count_even_odd_digits(int num) {
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

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(count_even_odd_digits(0), {1, 0}));
    return 0;
}