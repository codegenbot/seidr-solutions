#include <vector>
#include <string>

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string num_str = std::to_string(std::abs(num));
    for (char digit : num_str) {
        if ((digit - '0') % 2 == 0) {
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
    assert(issame(even_odd_count(12345), {3, 2}));
    assert(issame(even_odd_count(-9876543), {4, 4}));
    
    return 0;
}