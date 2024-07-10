#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(std::abs(num));

    for (char c : numStr) {
        if (c % 2 == 0) {
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
    assert(issame(even_odd_count(0), {1, 0}));

    return 0;
}