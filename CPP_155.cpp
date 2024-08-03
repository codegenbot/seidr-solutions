#include <vector>
#include <string>
#include <cassert>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string num_str = std::to_string(std::abs(num));
    for (char c : num_str) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    assert(issame({4, 5}, even_odd_count(123456789)));
    assert(issame({5, 0}, even_odd_count(24680)));
    assert(issame({0, 6}, even_odd_count(111111));

    return 0;
}