#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string num_str = std::to_string(std::abs(num));
    for (char c : num_str) {
        if (c % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    // Call even_odd_count function here
    return 0;
}