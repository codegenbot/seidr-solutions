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
    // Sample test
    std::vector<int> result = even_odd_count(12345);
    assert(result[0] == 3 && result[1] == 2);
    
    return 0;
}