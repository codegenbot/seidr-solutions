#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> solve(int num) {
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