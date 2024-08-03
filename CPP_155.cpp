#include <vector>
#include <string>
#include <cassert>

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
    // Test cases for even_odd_count function
    assert(issame(even_odd_count(123456789), std::vector<int>{4, 5}));
    assert(issame(even_odd_count(24680), std::vector<int>{5, 0}));
    assert(issame(even_odd_count(111111), std::vector<int>{0, 6}));
    
    return 0;
}