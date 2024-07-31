#include <vector>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts = {0, 0};
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
    assert(issame(even_odd_count(0), {1, 0}));
}