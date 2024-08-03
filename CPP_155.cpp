#include <vector>
#include <string>
#include <cassert>
#include <iostream>

bool issame_cpp(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string num_str = std::to_string(abs(num));
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
    std::vector<int> a = {2, 3};
    std::vector<int> b = {2, 3};
    assert(issame_cpp(a, b));

    std::vector<int> counts = even_odd_count(12345);
    std::cout << "Even count: " << counts[0] << ", Odd count: " << counts[1] << std::endl;

    return 0;
}